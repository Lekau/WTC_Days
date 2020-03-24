int ft_iterative_power(int nb, int power)
{
    if (power > 1) 
    {
        int const_nb;
        const_nb = nb;
        while(power > 1)
        {
            nb = nb * const_nb;
            power--;
        }
        return (nb);
    } 
    else if (power == 1)
    {
        return (nb);
    } 
    else 
    {
        return (0);
    }
}