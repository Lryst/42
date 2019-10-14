void    *ft_memccpy(void *dest, const void *src, int i, size_t n)
{
    unsigned long int u;
    unsigned long int a;

    a = ft_strlen(dest);
    u = 0;

    while (src[u] != '\0' && src[u] != i && u < n)       
    {
     dest[a + u] = src[u];
     u++;   
    }
    if (src[u] == i)
        return (dest[a + u + 1]);
    else 
        return (NULL);
    
}