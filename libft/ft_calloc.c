#include <stdlib.h>

void    *ft_calloc(size_t i, size_t n)
{
    void *tab;

    if (i == 0 || n == 0)
        return (NULL);
    tab = (void *)malloc(sizeof(n) * i);
    if (tab = NULL)
        return (NULL);
    ft_bzero(tab, i);
    return (tab);
}