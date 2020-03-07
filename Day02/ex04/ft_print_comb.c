#include <unistd.h>

void ft_putchar(char kau)
{
    write(1, &kau, 1);
}

void ft_print_comb()
{
    char    a;
    char    b;
    char    c;

    a = '0';
    b = '0';
    c - '0';

    while (a <= '9')
    {
        while (b <= '9')
        {
            while (c <= '9')
            {
                if (a != c && b != a && c != b && b > a && c > a)
                {
                    ft_putchar(a);
                    ft_putchar(b);
                    ft_putchar(c);
                    ft_putchar(',');
                    ft_putchar(' ');
                    c++;
                } 
                else
                {
                    c++;
                }
            } 
            c = '0';
            b++;
        }
        b = '0';
        a++;
    }
}

int main(void)
{
    ft_print_comb();
}