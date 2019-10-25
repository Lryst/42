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
    size_t i;
    unsigned char *dst;
    unsigned char *sr;

    i = 0;
    dst = (unsigned char*) dest;
    sr = (unsigned char*) src;
    if (n == 0)
        return (NULL);
    while (sr[i] &&  i < n - 1)
    {
        tmp[i] = sr[i];
        i++;
    }
    tmp[i] = '\0';
    i = 0;
    while (dst[u] != '\0')
    {
        dst[u + i] = tmp[i];
        i++;
    }
    return (dest);
}