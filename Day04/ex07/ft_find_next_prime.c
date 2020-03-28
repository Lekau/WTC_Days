#include <stdio.h>
int ft_find_next_prime(int nb)
{
    int next_nb = (nb + 1);
    int div = 2;
    while (next_nb > nb)
    {
        div = 2;
        while (next_nb%div != 0 && div != next_nb)
            div++;

        if (next_nb != div)
            next_nb++;
        else
           break;
    }
    return (next_nb);
}
int main(void)
{
    int num = 13;
    printf("%d \n", ft_find_next_prime(num));
    return (0);
}