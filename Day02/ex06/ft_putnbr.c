#include <unistd.h>

void ft_putchar(char nbrc)
{
    write(1, &nbrc, 1);
}

void ft_putnbr(int n)
{
    char nbr;

    nbr = n + '0';

    ft_putchar(nbr);
}