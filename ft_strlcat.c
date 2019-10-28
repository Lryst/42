/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:52:18 by lryst             #+#    #+#             */
/*   Updated: 2019/10/28 15:07:17 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;
	
	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen((char *) src);
	if (!size)
		return (s + size);
	while (src[i] && (d + i) < (size - 1))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	if (d > size)
		return (s + size);
	return (d + s);
}