int ft_iterative_factorial(int nb)
{
    if (nb > 0)
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
    else if (nb == 0)
    {
        return (1);
    }
    else 
    {
        return (0);
    }
}