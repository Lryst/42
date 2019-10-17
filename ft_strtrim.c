char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int u;

    u = ft_strlen(s1);
    i = 0;
    if (i = u || s1[i] == '\0')
        return (NULL);
    while (ft_strspn(set, s1[i]) != 0)
            i++;
    while (ft_strrchr(set, s1[u]) != 0)
            u--;
    return (ft_strndup(s1, (ft_strlen(s1) - i - u)));
}