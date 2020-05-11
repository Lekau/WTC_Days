char *ft_strlowcase(char *str)
{
    int k;

    k = 0;
    while (str[k] != '\0')
    {
        if(str[k] >= 'A' && str[k] <= 'Z')
            str[k] = str[k] + 32;

        k++;
    }
   
    return (str);
}