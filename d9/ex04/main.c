#include <stdio.h>
char *ft_rot42(char *str);

int main()
{
	char *str;
	str = "text that has not been rotted";
	str = ft_rot42(str);
	printf("%s\n", str); 
}
