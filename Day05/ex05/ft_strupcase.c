char *ft_strupcase(char *str)
{
    int n;
    n = 0;

    while (str[n] != '\0')
    {
        if(str[n] >= 'a' && str[n] <= 'z')
            str[n] = str[n] - 32;
            
        n++;
    }
    return (str);
}