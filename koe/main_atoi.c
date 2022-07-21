#include <stdio.h>
#include <stdlib.h>
int ft_atoi(char *str);
int main()
{
	char *str;
	str="  fhdge";
	int result=ft_atoi(str);
	printf("My :%i \n",result);
	printf("Real :%i \n\n",atoi(str));

	str="-9845";
	 result=ft_atoi(str);
	printf("My :%i \n",result);
	printf("Real :%i \n\n",atoi(str));

	str=" - 4P5";
	 result=ft_atoi(str);
	printf("My :%i \n",result);
	printf("Real :%i \n\n",atoi(str));

	str="&#3648";
	 result=ft_atoi(str);
	printf("My :%i \n",result);
	printf("Real :%i \n\n",atoi(str));

	str="2 83 647";
	 result=ft_atoi(str);
	printf("My :%i \n",result);
	printf("Real :%i \n\n",atoi(str));
	return(0);
}
