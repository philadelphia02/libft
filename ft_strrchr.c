char    *ft_strrchr(const char *s, int c)
{
    char    *p;

    p = NULL;
    while (*s)
    {
        if (*s == c)
            p = (char*)s;
        s++;
    }
    if (*s == c)
        return ((char*)s);
    return (p);
}
