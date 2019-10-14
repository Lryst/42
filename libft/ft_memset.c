void    ft_memset(void *s, int c, size_t u)
{
    unsigned long int i;

    while (s[i] != '\0' && i < u - 1)
    {
        s[i] = c;
        i++;
    }
    return (s);
}