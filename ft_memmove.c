void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char    *s1;
    unsigned char    *s2;

    s1 = (unsigned char *)dest;
    s2 = (unsigned char *)src;
    if (s2 < s1)
        while (n--)
            s1[n] = s2[n];
    else
        ft_memcpy(s1, s2, n);
    return (dest);
}
