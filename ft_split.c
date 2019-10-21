/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:07:02 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:07:51 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_countwords(char *str, char c)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] !=  c)
            i++;
        else if (str[i] == c)
            count++;
    }
    return (count);
}

char    *ft_mallocwords(char *str, char c)
{
    int i;
    char *words;

    i = 0;
    while (str[i] != c)
        i++;
    words = (char*)malloc(sizeof(char) * i + 1);
    if (words == NULL)
        return (NULL);
    i = 0;
    while (str[i] != c)
    {
        words[i] = str[i];
        i++;
    }
    words[i] = '\0';
    return (words);
}

char    **ft_split(char const *s, char c)
{
    char **tab;
    int i;
    int u;

    i = 0;
    u = 0;
    tab = (char**)malloc(sizeof(char) * ft_countwords(s, c) + 1);
    if (tab == NULL)
        return (NULL);
    while (s[i] != '\0' && c != NULL)
    {
        while (s[i] != c)
            *tab[u] = ft_mallocwords(s, c);
        if (s[i] == c)
        {
            *tab[u] = '\0';
            u = 0;
            tab++;
        }
        i++;
    }
    tab = NULL;
    return (tab);
}