/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 16:47:05 by slampine          #+#    #+#             */
/*   Updated: 2022/07/16 16:47:54 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	is_equal(char *s1, char *s2);
char *rush00(int width, int height);
char *rush01(int width, int height);
char *rush02(int width, int height);
char *rush03(int width, int height);
char *rush04(int width, int height);
int main(int argc, char **argv)
{
    int matches=0;
    int i=atoi(argv[3]);
    int j=atoi(argv[2]);
    int index=0;
    int num=atoi(argv[1]);
    char data;
    char c = '\n';
    if(num==0)
    rush00(i,j);
    if(num==1)
    rush01(i,j);
    if(num==2)
    rush02(i,j);
    if(num==3)
    rush03(i,j);
    if(num==4)
    rush04(i,j);
    //list r00 = rush00(i,j); //Should be linked list containing rush00's result in order
/*while(argv[1][index] != '\0') Fails on newline (since \n is kinda 2 chars, reads only 1), not strictly neccessary
{                               since rush-checking also checks illegal chars, just bit slower
    data = argv[1][index];
    if(data != 'n' && data != 'o' && data != '-' && data != '|' && data != '/' && data != '*' && data != '\\' && data != 'A' && data != 'B' && data != 'C' && data != ' ')
    {
        write(1,"none\n",5);
        return(0);
    }
    index++;
}*/
    //printf("%i", is_equal(rush00(i,j),rush01(i,j)));
    /*printf("%i",is_equal("DEF","DEF"));
    while(argv[1][index] != '\0')
    {
    if(is_equal(r00,argv[1][index]))
    {
        matches=1;
        write(1,"[rush-00] [i] [j]",17);
    }
    if(is_equal(rush01(i,j),argv[1]))
    {
        if(matches==1)
        {
            write(1," || ",4);
        }
        matches=1;
        write(1,"[rush-01] [i] [j]",17);
    }
    if(is_equal(rush02(i,j),argv[1]))
    {
        if(matches==1)
        {
            write(1," || ",4);
        }
        matches=1;
        write(1,"[rush-02] [i] [j]",17);
    }
    if(is_equal(rush03(i,j),argv[1]))
    {
        if(matches==1)
        {
            write(1," || ",4);
        }
        matches=1;
        write(1,"[rush-03] [i] [j]",17);
    }
    if(is_equal(rush04(i,j),argv[1]))
    {
        if(matches==1)
        {
            write(1," || ",4);
        }
        matches=1;
        write(1,"[rush-04] [i] [j]",17);
    }
    if(matches==0)
    {
        write(1,"none\n",5);
    }
    index++;
    }*/
    //write(1,&c,1);
    return(0);
}