#include "libft.h"
void    ft_putnbr(int nb)
{
    long int n;

    n = nb;
    if (nb < 0)
        n = n * - 1;
    if (nb >= 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        ft_putchar(n + 48);
}