#include <unistd.h>

int        ft_atoi(char *str)
{
    int atoi;
    int negative;
    
    atoi = 0;
    negative = 1;
    
    while (*str == '\t' || *str == '\v' || *str == '\n' || *str == '\r'
            || *str == '\f' || *str == ' ')
        str++;
    while (*str == '+' || *str == '-')
    {
        if (*str == '-')
            negative = negative * -1;
        str++;
    }
    while (*str >= '0' && *str <= '9')
    {
        atoi = atoi * 10 + *str - 48;
        str++;
    }
    return (atoi * negative);
}
