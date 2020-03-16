#include <unistd.h>

void ft_putstr(char *str)
{
    int kau;
    
    kau = 0;
    while(str[kau] != '0')
    {
        write(1, &str[kau],1);
        kau++;
    }
}