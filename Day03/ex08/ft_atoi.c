int ft_atoi(char *str)
{
    int kau;
    int i;
    int is_neg;
    kau = 0;
    is_neg = 1;

    while(!(str[i] >= '0' && str[i] <= '9') && str[i] != '-')
        i++;
    if (str[i] == '-')
    {
        is_neg = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        kau = (kau * 10)+(str[i] - '0');
        i++;
    }
    return (kau * is_neg);
}