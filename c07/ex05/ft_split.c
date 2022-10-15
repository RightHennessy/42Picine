#include <stdlib.h>

int is_charset(char c, char *charset){
    while (*charset)
    {
        if (c == *charset)
            return (1);
        charset++;
    }
    return (0);
}

int ft_cntword(char *str, char *charset)
{
    int     cnt;
    char    prev;

    prev = *charset; 
    while(*str)
    {
        if (is_charset(*str, charset) == 1)
        {
            if (is_charset(prev, charset) == 0)
                cnt++;
        }
        prev = *str;
        str++;
    }
    return (cnt);
}

void make_arr(char *str, char *charset, char **arr)
{
    int     i;
    int     j;
    char    prev;

    i = 0;
    j = 0;
    prev = *charset; 
    while(*str)
    {
        if (is_charset(*str, charset) == 1)
        {
            if (is_charset(prev, charset) == 0)
            {
                i++;
                j = 0;
            }
        }
        else
            arr[i][j++] = *str;
        prev = *str;
        str++;
    }
}

void make_arr(char *str, char *charset, char **arr)
{
    int     i;
    int     j;
    char    prev;

    i = 0;
    j = 0;
    prev = *charset; 
    while(*str)
    {
        if (is_charset(*str, charset) == 1)
        {
            if (is_charset(prev, charset) == 0)
            {
                arr[i] = malloc(sizeof(char) * (j+1));
                i++;
                j = 0;
            }
        }
        else
            j++;
        prev = *str;
        str++;
    }
}

char    **ft_split(char *str, char *charset)
{
    int     cnt_word;
    char    **ans;
    char    prev;
    char    *ptr;

    cnt_word = ft_cntword(str, charset);
    ans = malloc(sizeof(char *) * (cnt_word + 1));
    ans[cnt_word] = NULL;
    make_arr(str, charset, ans);
    ft_putsplit(str, charset, ans);
    return (ans);
}