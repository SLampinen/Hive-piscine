#include <stdlib.h>
#include <stdio.h>
int is_prime(int candidate);
int main(int argc, char **argv)
{
int num;
int res;
if(argc==2)
{
num = atoi(argv[1]);
res = is_prime(num);
if(res == 1)
printf("%i is prime\n", num);
else if(res == 0)
printf("%i is not prime\n",num);
}
return(0);
}