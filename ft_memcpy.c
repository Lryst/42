/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:38 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:05:14 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned long i;
    unsigned long u;

    i = 0;
    u = ft_memlen(dest);
    if (n = NULL)
        return (NULL);
    while (src[i] != '\0' && i < n)
    {
        dest[u + i] = src[i];
        i++;
    }
    return (dest);
}