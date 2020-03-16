#include <stdio.h>
char *ft_strrev(char *str)
{
    char *temp_str;
    int kau;
    int uak;

    kau = 0;
    while(str[kau] != '\0')
    {
        kau++;
    }
    while (str[uak] != '\0')
    {
        temp_str[uak] = str[kau];
        uak++;
        kau--;
    }
    kau = 0;
    while (temp_str[kau] != '\0')
    {
        str[kau] = temp_str[kau];
        kau++;
    }
    return(str);
}

int main()
{
    char *lekau;

    *lekau = "Lekau";
    
    printf("%s", ft_strrev(lekau));
    return(0);
}