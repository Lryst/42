/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:46 by lryst             #+#    #+#             */
/*   Updated: 2019/10/14 11:17:08 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    *ft_memccpy(void *dest, const void *src, int i, size_t n)
{
    unsigned long int u;
    unsigned long int a;

    a = ft_memlen(dest);
    u = 0;

    if (n = NULL)
        return (NULL);
    while (src[u] != '\0' && src[u] != i && u < n)       
    {
     dest[a + u] = src[u];
     u++;   
    }
    if (src[u] == i)
        return (dest[a + u + 1]);
    else 
        return (NULL);
    
}