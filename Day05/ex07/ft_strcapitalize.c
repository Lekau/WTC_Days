char *ft_strcapitalize(char *str)
{
    enum bool {False, True};
    enum bool start;
    int i;

    start = True;
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && start == True)
        {
            str[i] =- 32;
            start = False;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') && start == False)
            str[i] =+ 32;
        else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i];
        else 
            start = True;
        i++;
    }
    return (str);
}