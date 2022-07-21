char **ft_split_whitespaces(char *str);

int main()
{
char *c = "Text that will get splitten";
char* str = ft_split_whitespaces(c);
int index = 0;
while(index < 5)
{
	printf("%s\n", str[index]);
	index++;
}
}
