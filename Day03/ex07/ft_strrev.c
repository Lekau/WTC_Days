#include <stdio.h>

char *ft_strrev(char *str)
{
    int i;
    int k; 
    char *temp;
    i = 0;
    k = 0;
    while (str[k] != '\0')
    {
        k++;
    }
    temp = str;
    k--;
    while (k >= 0)
    {
        str[i] = temp[k];
        i++;
        k--;
    }
    temp[i] = '\0';
    return(str);
}

int main()
{
    char *lekau;

    lekau = "lekau";
    
    printf("%s", ft_strrev(lekau));
    return(0);
}