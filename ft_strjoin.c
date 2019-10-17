#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strjoin(const char *s1, const char *s2)
{
    char *tab;
    long int i;
    long int u;

    i = 0;
    u = 0;
    if (s1 == NULL || s2 == NULL)
        return (NULL);
    tab = (char*)malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
    if (tab == NULL)
        return (NULL);
    while (s1[i])
    {
        tab[i] = s1[i];
        i++;
    }
    while (s2[u])
    {
        tab[i] = s2[u];
        i++;
        u++;
    }
    tab[i] = '\0';
    return (tab);
}

int main()
{
    printf("%s\n", ft_strjoin("bonjour les copains", "p"));
}