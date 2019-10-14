void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned long i;
    unsigned long u;

    i = 0;
    u = ft_strlen(dest);
    while (src[i] != '\0' && i < n)
    {
        dest[u + i] = src[i];
        i++;
    }
    return (dest);
}