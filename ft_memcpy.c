void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t        i;
    char        *sd;
    char        *sr;

    sd = dst;
    sr = (void*)src;
    i = 0;
    while (i < n)
    {
        sd[i] = sr[i];
        i++;
    }
    return (dst);
}
