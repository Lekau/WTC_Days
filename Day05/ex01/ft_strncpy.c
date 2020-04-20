char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;
    while (src[i] != '\0' && (i + 1) <= n)
    {
        dest[i] = src[i];
        i++;
    }
    if ((i + 1) <= n)
    {
        while((i + 1) <= n)
        {
            dest[i] = '\0';
        }
    }
    return (dest);
}