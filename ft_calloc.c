#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    char    *mem;

    if (!(mem = malloc(size * count)))
        return (NULL);
    ft_memset(mem, 0, count * size);
    return (mem);
}
