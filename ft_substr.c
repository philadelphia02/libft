#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    int        i;

    i = 0;
    if (!s)
        return (NULL);
    if (start > ft_strlen(s))
        return (NULL);
    if (!(str = ft_calloc(len + 1, sizeof(char))))
        return (NULL);
    while (s[start] && len)
    {
        str[i] = s[start];
        i++;
        start++;
        len--;
    }
    str[i] = '\0';
    return (str);
}
