#include <stdlib.h>

int ft_strslen(int size, char **strs)
{
    int i;
    int len;

    len = 0;
    i = 0;
    while (i < size)
    {
        while (*strs[i])
        {
            len ++;
            strs[i]++;
        }
        i++;
    }
    return (len);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int     i;
    int     j;
    char    *str;
    char    *ptr;

    i = 0;
    j = 0;
    str = malloc(sizeof(char)*(size + ft_strslen(size, strs)));
    while (i < size)
    {
        while (*strs[i])
        {
            str[j++] = *strs[i]; 
            strs[i]++;
        }
        ptr = sep;
        while(*ptr)
            str[j++] = *(ptr++);
        i++;
    }
    if (size == 0)
        j = 0;
    str[j] = '\0';
    return (str);
}