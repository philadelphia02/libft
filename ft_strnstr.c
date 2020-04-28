char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t        i;
    size_t        j;

    i = 0;
    if (*little == '\0')
        return ((char*)big);
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] == little[j] && i + j < len)
        {
            if (little[j + 1] == '\0')
                return (&((char*)big)[i]);
            j++;
        }
        i++;
    }
    return(0);
}

int main()
{
    char *s = "salmizsh";
    char *b = "zsh";
    
    printf("%s\n", ft_strnstr(s,b, 8));
    printf("%s", strnstr(s, b, 8));
}
