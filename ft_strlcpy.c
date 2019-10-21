/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:16:36 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:02:42 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(const char *dest, const char *src, size_t n)
{
	unsigned long int i;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest = &src[i];
		i++;
	}
	return (ft_strlen(src));
}