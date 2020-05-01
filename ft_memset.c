void    *ft_memset(void *b, int c, size_t len)
{
    size_t        i;
    char        *s;

    s = b;
    i = 0;
    while (i < len)
    {
        s[i] = c;
        i++;
    }
    return (b);
}
