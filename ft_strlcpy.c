/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:16:36 by lryst             #+#    #+#             */
/*   Updated: 2019/11/04 13:58:47 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(const char *dest, const char *src, size_t n)
{
	size_t i;
	char *dst;
	char *sr;
	size_t u;

	dst = (char*)dest;
	sr = (char*)src;
	i = 0;
	u = ft_strlen((char *)src);
	while (sr[i] != '\0' && i < n - 1)
	{
		dst[i] = sr[i];
		i++;
	}
	dst[i] = '\0';
	return (u);
}
