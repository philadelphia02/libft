void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t    i;
    char    *ss;

    i = 0;
    ss = (void*)s;
    while (i < n)
    {
        if (ss[i] == c)
            return (ss + i);
        i++;
    }
    return (NULL);
}
