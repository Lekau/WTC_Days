#include <stdio.h>
int ft_is_prime(int nb)
{
    int div = 2;

    while (nb%div != 0 && div != nb)
    {
        div++;
    }
    if (nb != div)
        return (0);
    else
        return (1); 
}

int main()
{
    int num = 50;
    printf("%d \n", ft_is_prime(num));
    return (0);
}