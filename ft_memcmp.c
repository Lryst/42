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

    i = 0;

    if (n == NULL)
        return (NULL);
    while (i < n)
    {
        if (s1[i] == s2[i])
            return (s1 - s2);
        i++;        
    }
}