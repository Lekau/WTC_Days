#include <stdio.h>
int ft_sqrt(int nb)
{
    int sqrt_nb = 1;

    while(((sqrt_nb * sqrt_nb) != nb) && sqrt_nb != nb)
    {
        sqrt_nb++;
    }
    if (sqrt_nb != nb)
        return (sqrt_nb);
    else
        return (0);
}

int main(void)
{
    int num = 144;
    printf("%d \n", ft_sqrt(num));
    return (0);
}