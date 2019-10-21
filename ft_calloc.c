/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:39:47 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:04:10 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t i, size_t n)
{
    void *tab;

    if (i == 0 || n == 0)
        return (NULL);
    tab = (void *)malloc(sizeof(n) * i);
    if (tab == NULL)
        return (NULL);
    ft_bzero(tab, i);
    return (tab);
}