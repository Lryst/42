/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:11:51 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:05:01 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned long int i;
    unsigned char *str;

    i = 0;
    str = (unsigned char*) s;
    if (n == 0)
        return (NULL);
    while (str[i])
    {
        if (str[i] == c)
            return (str + i);
        i++;
    }
    return (NULL);
}