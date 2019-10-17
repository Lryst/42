void    ft_putchar_fd(char p, int fd)
{
    write(fd, &p, 1);
}