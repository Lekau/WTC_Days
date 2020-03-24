int ft_iterative_factorial(int nb)
{
    int i;
    i = nb - 1;

    while (i > 0)
    {
        nb = nb * i;
        i--;
    }
    return (nb);
}