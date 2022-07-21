#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int candidate;
    int original;
    int power;

    power=1;
    candidate=atoi(argv[1]);
    original=candidate;
    if(argc==2)
    {
        while(1)
        {
            if(candidate == 2)
            {
                printf("%i is %ith power of two\n",original, power);
                return(1);
            }
            else if(candidate < 2)
            {
                printf("%i is not power of two\n",original);
                return(0);
            }
            else if(candidate % 2 == 1)
            {
                printf("%i is not power of two\n",original);
                return(0);
            }
            else 
            {
                candidate = candidate / 2;
                power++;
            }
        }
    }
}