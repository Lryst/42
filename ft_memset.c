/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:37:04 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 17:25:18 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t u)
{
    unsigned char *str;
    unsigned long int i;

    i = 0;
    str = (unsigned char*) s;
    if (!u || !s)
        return (0);
    while (i < u - 1)
    {
        str[i] = c;
        i++;
    }
    return (str);
}