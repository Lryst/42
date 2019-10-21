char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    int len;
    char *str;
    
    len = ft_strlen(s);
    i = 0;
    if (s == NULL)
        return (NULL);
    str = (char*)malloc(sizeof(char) * len + 1);
    if (str == NULL)
        return (NULL);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    return (str);
}