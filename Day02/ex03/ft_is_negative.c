#include <unistd.h>

void ft_putchar(char n)
{
    write(1, &n, 1);
}

void ft_is_negative(int n)
{
    if (n < 0)
    {
        ft_putchar('N');
    }
    else 
    {
        ft_putchar('P');
    }
}

int main(void)
{
    ft_is_negative(-5);
    return (0);
}