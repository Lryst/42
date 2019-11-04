/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:46 by lryst             #+#    #+#             */
/*   Updated: 2019/11/04 13:09:03 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int i, size_t n)
{
	unsigned long int	u;
	unsigned char		*dst;
	unsigned char		*sr;

	u = 0;
	dst = (unsigned char*)dest;
	sr = (unsigned char*)src;
	if (n == 0)
		return (NULL);
	while (sr[u] != '\0' && sr[u] != i && u < n)
	{
		dst[u] = sr[u];
		if (sr[u] == i)
			return (dst + u + 1);
		u++;
	}
	return (NULL);
}
