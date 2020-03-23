#include <unistd.h>
char ft_putnbr(int nbr)
{
    char cnbr;

    cnbr = nbr + '0';

    return (cnbr);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_sort_integer_table(int *tab, int size)
{
    int sorted[size];
    int i; 
    int k;
    int tmp;

    k = 0;
    i = 0;
    while (i < size)
    {
        sorted[i] = tab[i];
        i++;
    }
    while(k < size)
    {
        i = 0;
        while(i < size)
        {
            if (sorted[k] < sorted[i])
            {
                tmp = sorted[k];
                sorted[k] = sorted[i];
                sorted[i] = tmp;
            }
            i++;
        }
        k++;
    }
    //testing 
    int s = 0;
    while(s < size)
    {
        ft_putchar(ft_putnbr(sorted[s]));
        s++;
    }
}

int main ()
{
    int tab[5] = {4,2,5,1,3};
    int size = 5;
    ft_sort_integer_table(tab, size);
    return (0);
}