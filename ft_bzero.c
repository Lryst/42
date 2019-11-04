/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 10:36:12 by lryst             #+#    #+#             */
/*   Updated: 2019/11/04 17:03:24 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t i)
{
	unsigned long int	n;
	unsigned char		*s;

	n = 0;
	s = (unsigned char*)str;
	while (s[i] && n < i)
	{
		s[i] = '\0';
		i++;
	}
	return (0);
}
