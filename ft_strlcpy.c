/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 09:16:36 by lryst             #+#    #+#             */
/*   Updated: 2019/10/11 12:09:12 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

int main(int ac, char **av)
{
	size_t n = 4;
	
	printf("STRLCPY = %lu\n", strlcpy(strdup(av[1]), strdup(av[2]), n));
	printf("FT_STRLCPY = %lu\n", ft_strlcpy(av[1], av[2], n));
	
	return (0);
}