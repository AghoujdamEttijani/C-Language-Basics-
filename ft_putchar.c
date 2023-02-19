#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1); // The syscall write API function print from stdout file descriptor from the buffer of char type with the size 1 byte
}
