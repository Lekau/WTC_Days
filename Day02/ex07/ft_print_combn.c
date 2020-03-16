#include <unistd.h>
#include <stdlib.h>
void ft_putchar(char a)
{
    write(1, &a, 1);
}

void ft_print_combn(int n)
{
    int i;
    char my_char;
    my_char = '0';
    i = 0;

    while (i <= n)
    {

        while (my_char <= '9')
        {   
            ft_putchar(my_char);
            my_char++;
        }
        i++;
    }
        
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_print_combn(atoi(argv[1][0]));
    }
    else 
    {
        ft_putchar('a');
    }
}