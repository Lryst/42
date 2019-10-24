/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:46 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:04:54 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int i, size_t n)
{
    unsigned long int u;
    unsigned long int a;
    unsigned char *dst;
    unsigned char *sr;

    a = ft_memlen(dest);
    u = 0;
    dst = (unsigned char*) dest;
    sr = (unisgned char*) src;
    if (n == 0)
        return (NULL);
    while (sr[u] != '\0' && sr[u] != i && u < n)       
    {
     dst[a + u] = sr[u];
     u++;   
    }
    if (sr[u] == i)
        return (dst[a + u + 1]);
    else 
        return (NULL);   
}