void    *ft_memlen(void *s)
{
    int i;

    i = 0;
    while (*s[i])
        i++;
    return (i);
}