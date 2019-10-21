int ft_strspn(char *set, char u)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (set[i] == u)
            return (1);
        i++;
    }
    return (0);
}