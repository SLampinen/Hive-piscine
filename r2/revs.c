#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char	*input;
	int		fd=1;

	char **array;
	int i = 0;
	int j = 0;
	int jmax;
	int index=0;
		while (fd!=0)
		{
			fd = read(STDIN_FILENO,input,1);
			if (fd!=0)
			{
				if(input!='\n')
				{
					array[i][j]=input;
					j++;
					index++;
				printf("%s",input);
				}
				else
				{
					i++;
					jmax=j;
					j=0;
				}
			}
		}

		int row = 0;
		int col = 0;
		while(row < i)
		{
			while(col < jmax)
			{
				printf("%c",array[row][col]);
				col++;
			}
			row++;
			col=0;
		}
		printf("Contains %i characters",index);
		return(0);
}
