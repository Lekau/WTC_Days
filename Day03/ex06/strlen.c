#include <stdio.h>
int ft_strlen(char *str)
{
    int kau;
    kau = 0;
    while(str[kau] != '\0')
    {
        kau++;
    }
    return (kau);
}