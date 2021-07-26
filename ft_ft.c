#include<stdio.h>
#include<stdlib.h>

void    ft_ft(int *********nbr)
{
    *********nbr = 42;
}

int     main(int argc, char **argv)
{
    int n;
    
    int *p;
    while (*p < 10)
    {
        *p++;
    }
    p = &n;
    ft_ft(*p);
    printf("%d", n);

    return (0);
}