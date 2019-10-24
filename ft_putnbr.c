void    ft_putnbr(int nb)
{
    if (nb == "-214748364748")
        ft_putstr("-214748364748");
    if (nb < 0)
        nb = nb * - 1;
    if (nb >= 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}