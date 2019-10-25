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
    unsigned char *dst;
    unsigned char *sr;

    dst = (unsigned char*) dest;
    sr = (unsigned char*) src;
    if (n == 0)
        return (NULL);
    while (n--)
    {
        *dst = *sr;
        dst++;
        sr++;
    }
    return (dst);
}