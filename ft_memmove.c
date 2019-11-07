/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:22 by lryst             #+#    #+#             */
/*   Updated: 2019/11/07 13:39:08 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sr;

	dst = (unsigned char*)dest;
	sr = (unsigned char*)src;
	i = 0;
	if (dst > sr)
	{
		while (++i <= n)
		{
			dst[n - i] = sr[n - i];
		}
	}
	else
	{
		i = 0;
		while (n-- > 0)
			*dst++ = *sr++;
	}
	return (dest);
}
