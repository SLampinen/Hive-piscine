/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsankola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:02:45 by tsankola          #+#    #+#             */
/*   Updated: 2022/07/19 15:02:47 by tsankola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "bsq.h"
#include <stdlib.h> // malloc, free, exit
#include <unistd.h> // read, write
#include <fcntl.h> // open, close 
#include <stdio.h>
#define READBUFFERSIZE 80
#define WRITEBUFFERSIZE 80

// You may only use the following functions : exit, open, close,
// write, read, malloc and free

int	initialize_bsq_obj_from_buffer(char *buffer, t_bsq_obj *bsq_obj)
{
	double	oom;
	int		line1len;
	int		cc;
	int		newval;

	cc = 1;
	oom = 0.1;
	bsq_obj->height = 0;
	line1len = ft_linelen(buffer);
	newval = 0;
	if (line1len < 4)
		return (0);
	bsq_obj->full = buffer[line1len - (cc++)];
	bsq_obj->obstacle = buffer[line1len - (cc++)];
	bsq_obj->empty = buffer[line1len - (cc++)];
	while ('0' <= buffer[line1len - cc] && buffer[line1len - cc] <= '9')
	{
		if (detect_overflow_multiplication(oom, 10))
			return (0);
		oom *= 10;
		if (detect_overflow_multiplication(((int)oom), (buffer[line1len - (cc)] - '0')))
			return (0);
		newval = ((int)oom) * (buffer[line1len - (cc++)] - '0');
		if (detect_overflow_addition(bsq_obj->height, newval))
			return (0);
		bsq_obj->height += newval;
	}
	if (cc - 1 != line1len)
	{
		return (0);
	}
	return (cc);
}

int	moar_space(char **buffer, int totalsize)
{
	char	*newbuffer;
	int		i;

	newbuffer = malloc(sizeof(char) * (totalsize + WRITEBUFFERSIZE));
	if (newbuffer == NULL)
		exit(124);
	i = 0;
	while (i < totalsize)
	{
		newbuffer[i] = (*buffer)[i];
		i++;
	}
	free(*buffer);
	*buffer = newbuffer;
	return (totalsize + WRITEBUFFERSIZE);
}

//cc[0] = chars read from file, cc[1] = chars parsed
//cc[2] = size of write buffer, cc[3] = characters_written
int	read_map_from_file(int fd, t_bsq_obj *bsq_obj, char *read_bfr, int cc[])
{
	char	*write_bfr;

	write_bfr = malloc(sizeof(char) * (WRITEBUFFERSIZE + 1));
	cc[0] = read(fd, read_bfr, READBUFFERSIZE);
	cc[2] = WRITEBUFFERSIZE + 1;
	if (cc[0])
		cc[1] = initialize_bsq_obj_from_buffer(read_bfr, bsq_obj);
	if (cc[1])
	{
		while (cc[0] > 0)
		{
			while (cc[1] < cc[0])
			{
				if (cc[3] + 1 >= cc[2] - 1)
					cc[2] = moar_space(&write_bfr, cc[2]);
				write_bfr[cc[3]++] = read_bfr[cc[1]++];
			}
			cc[0] = read(fd, read_bfr, READBUFFERSIZE);
			cc[1] = 0;
		}
		write_bfr[cc[3]] = '\0';
		return (set_map(bsq_obj, write_bfr));
	}
	free(write_bfr);
	return (0);
}

t_bsq_obj	*initialize_bsq_object_and_read_data(char *filename)
{
	int			fd;
	t_bsq_obj	*bsq_obj;
	char		*read_bfr;
	int			char_counter[4];

	read_bfr = malloc(sizeof(char) * READBUFFERSIZE);
	bsq_obj = construct_bsq_object();
	ft_initialize_array(char_counter, 4);
	if (filename != NULL)
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (NULL);
		if (!(read_map_from_file(fd, bsq_obj, read_bfr, char_counter)))
			destruct_bsq_object(&bsq_obj);
		close(fd);
	}
	else
	{
		fd = STDIN_FILENO;
		if (!(read_map_from_file(fd, bsq_obj, read_bfr, char_counter)))
			destruct_bsq_object(&bsq_obj);
	}
	free(read_bfr);
	return (bsq_obj);
}

int	main(int argc, char *argv[])
{
	t_bsq_obj	*bsq_obj;
	int			i;
	char		*filename;

	filename = NULL;
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			bsq_obj = initialize_bsq_object_and_read_data(argv[i++]);
			if (bsq_obj == NULL)
			{
				write(2, "map error\n", 10);
				continue ;
			}
			get_biggest_square_brute_force(bsq_obj);
			printf("%s\n", bsq_obj->map);
			destruct_bsq_object(&bsq_obj);
		}
	}
	else
	{
		bsq_obj = initialize_bsq_object_and_read_data(NULL);
		if (bsq_obj == NULL)
		{
			write(2, "map error\n", 10);
			return (0);
		}
		get_biggest_square_brute_force(bsq_obj);
		printf("%s\n", bsq_obj->map);
		destruct_bsq_object(&bsq_obj);
	}
	return (0);
}
