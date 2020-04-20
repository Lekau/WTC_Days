char *strstr(const char *haystack, const char *needle)
{
    int i; 
    i = 0;

    while (haystack[i] != '\0' && haystack[i] != needle[0])
        i++;

    if (haystack[i] != '\0')
        return (haystack[i]);
    else 
        return (0);
}