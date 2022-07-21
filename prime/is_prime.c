int is_prime(int candidate)
{
int num;
num = 2;
if(candidate<2)
    return(0);
while(num<candidate)
{
    if((candidate % num) != 0)
        num++;
    else
        return(0);
}
return(1);
}