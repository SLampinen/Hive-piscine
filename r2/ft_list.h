/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuynguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:11:38 by thuynguy          #+#    #+#             */
/*   Updated: 2022/07/14 22:05:10 by thuynguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_LIST_H
# define FT_LIST_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_read_display(int fd, char *buf, int BUF_SIZE);
void	ft_list_push_back(t_list **begin_list, void *data);
char	*ft_strcpy(char *dest, char *src);

#endif
