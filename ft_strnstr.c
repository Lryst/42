/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:29:43 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:02:04 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    unsigned long int i;

    i = 0;
    if (s1 == NULL || len == 0)
        return (NULL);
    if (s2 == NULL)
        return (s1);
    while (s1[i] && i < len)
    {
        if (ft_strspn(s2, s1[i]) == 1)
            return (s2);
        else
            i++;
    }
    return (NULL);
}