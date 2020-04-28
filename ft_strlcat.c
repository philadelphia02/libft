size_t        ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t        i;
    size_t        j;

    i = 0;
    j = 0;
    while (dst[i])
        i++;
    if (size)
    {
        while ((i + j) < (size - 1) && src[j])
        {
            dst[i + j] = src[j];
            j++;
        }
        dst[i + j] = '\0';
    }
    while (src[j])
        j++;
    if (i < size)
        return (i + j);
    return (size + j);
}
