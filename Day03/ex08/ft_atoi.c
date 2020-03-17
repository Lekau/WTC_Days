#include <stdio.h>
int ft_atoi(char *str)
{
    int kau;
    int i;
    int is_neg;
    kau = 0;
    is_neg = 1;
    i = 0;
    while(((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) && str[i] != '-')
        i++;

    if (str[i] == '-')
    {
        is_neg = -1;
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9')
    {
        kau = (kau * 10) + (str[i] - '0');
        i++;
    }

    return (kau * is_neg);
}
int main()
{
    char *num;

    num = "dgf-63lekau";
    printf("%d", ft_atoi(num));
    return(0);
}