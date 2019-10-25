/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 11:39:17 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:05:06 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(void const *s1, void const *s2, size_t n)
{
    unsigned long int i;
    unsigned char *str1;
    unsigned char *str2;

    i = 0;
    str1 = (unsigned char*) s1;
    str2 = (unsigned char*) s2;
    if (n == 0)
        return (0);
    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1 - str2);
        i++;        
    }
    return (0);
}