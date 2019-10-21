/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:22 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:06:39 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned long int i;
    unsigned long int u;
    void *tmp;

    i = 0;
    u = ft_memlen(dest);
    if (n = NULL)
        return (NULL);
    while (src[i] != '\0' &&  i < n - 1)
    {
        tmp[i] = src[i];
        i++;
    }
    tmp[i] = '\0';
    i = 0;
    while (dest[u] != '\0')
    {
        dest[u + i] = tmp[i];
        i++;
    }
    return (dest);
}