#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void ft_putstr(char *text);
void ft_putchar(char c);
int ft_strlen(char *str);
void ft_wtofile(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}
int main(int argc, char **argv)
{
	int index=1;
	int fd;

	fd = open("file_name",O_RDWR | O_CREAT);
	while(index < argc)
	{
		ft_wtofile(fd,argv[index]);
				index++;
	}
return(0);
}
