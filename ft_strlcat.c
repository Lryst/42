/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:52:18 by lryst             #+#    #+#             */
/*   Updated: 2019/10/11 12:07:37 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;
	
	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
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

int main(int ac, char **av)
{
	size_t n = 4;
	
	printf("STRLCAT = %lu\n", strlcat(strdup(av[1]), strdup(av[2]), n));
	printf("FT_STRLCAT = %lu\n", ft_strlcat(av[1], av[2], n));
	
	return (0);
}