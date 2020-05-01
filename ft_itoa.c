#include "libft.h"

size_t        ft_intlen(int n)
{
    size_t        len;

    len = 0;
    if (!n)
        len++;
    while (n)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *str;
    int        neg;
    int        num_len;

    neg = 0;
    num_len = ft_intlen(n);
    if (n < 0)
    {
        num_len++;
        neg = 1;
        n = -n;
    }
    num_len = ft_intlen(n);
    if (!(str = ft_calloc((num_len + 1), sizeof(char))))
        return (NULL);
    str[num_len] = '\0';
    while (num_len)
    {
        str[--num_len] = n % 10 + 48;
        n = n / 10;
    }
    return (str);
}
