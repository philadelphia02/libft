void    ft_bzero(void *s, size_t n)
{
    size_t    i;
    char    *str;

    i = 0;
    str = s;
    if (n == 0)
        return ;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}
