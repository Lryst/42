/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:07:53 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:12:30 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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