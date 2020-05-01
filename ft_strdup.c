#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    char    *str;
    int        i;

    i = 0;
    if (!(str = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1)))
        return (NULL);
    while (s1[i])
    {
        str[i] = (char)s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
