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

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned long int i;

    i = 0;
    if (n = NULL)
        return (NULL);
    while (s[i])
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    return (NULL);
}