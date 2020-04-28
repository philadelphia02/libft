size_t        ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t        i;
    size_t        src_len;

    i = 0;
    src_len = ft_strlen(src);
    while (src[i] && i + 1 < size)
    {
        dst[i] = src[i];
        i++;
    }
    if (size != 0)
        dst[i] = '\0';
    return (src_len);
}
