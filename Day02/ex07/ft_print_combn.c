#include <unistd.h>

ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_combn(int n)
{
    char a;
    char b;
    char c;
    char d;
    char e;
    char f;
    char g;
    char h;
    char i;

    while( n <= 1 && a <= '9')
    {
        while (n <= 2 && b <= '9')
        {
            while (n <= 3 && c <= '9')
            {
                while (n <= 4 && d <= '9')
                {
                    while (n <= 5 && e <= '9')
                    {
                        while (n <= 6 && f <= '9')
                        {
                            while (n <= 7 && g <= '9')
                            {
                                while (n <= 8 && h <= '9')
                                {
                                    while (n <= 9 && i <= '9')
                                    {
                                        i++;
                                    }
                                    h++;
                                }
                                g++;
                            }
                            f++;
                        }
                        e++;
                    }
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}