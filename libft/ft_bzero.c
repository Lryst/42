void    *ft_bzero(void *str, size_t i)
{
    unsigned long int n;

    i = 0;
    while (str[i] != '\0' && n < i)
    {
        str[i] = '\0';
        i++;
    }
}