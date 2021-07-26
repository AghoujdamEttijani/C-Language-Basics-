#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void     ft_putnbr(int   n)
{
    if (n < 0)
    {
        ft_putchar('-');
        if ( n == -2147483648)
        {
            ft_putchar( 2 + '0');
            ft_putnbr(147483648);
            return;
        }
        n = -n;
    }
    if ( n / 10 == 0)
    {
        ft_putchar(n + '0');
        return ;
    }
    ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}
int     main(int argc, char **argv)
{
    ft_putnbr(2147483647);

    return (0);
}