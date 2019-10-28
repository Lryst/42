/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:22 by lryst             #+#    #+#             */
/*   Updated: 2019/10/28 14:49:11 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *dst;
    unsigned char *sr;

    dst = (unsigned char*) dest;
    sr = (unsigned char*) src;
    if (dst > sr)
    {
        i = n;
        while (i > 0)
        {
            dst[i] = sr[i];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            dst[i] = sr[i];
            i++;
        } 
    }  
    return (dest);
}