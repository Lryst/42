void    ft_putendl_fd(char *p, int fd)
{
    ft_putstr_fd(p, fd);
    ft_putchar_fd("\n", fd);
}