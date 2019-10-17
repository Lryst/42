void    ft_putstr_fd(char *p, int fd)
{
    while (*p)
    {
      ft_putchar_fd(*p, fd);
       p++;
    }
}