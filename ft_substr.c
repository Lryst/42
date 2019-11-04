/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:08:04 by lryst             #+#    #+#             */
/*   Updated: 2019/11/04 15:53:25 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned long int	i;
	unsigned long int	u;
	char				*res;

	i = 0;
	u = 0;
	if (s == NULL || start < 0 || len < 0)
		return (NULL);
	res = (char*)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0' && i < start)
		i++;
	write(1, "b\n", 2);
	while (u < len - 1)
	{
		res[u] = s[i];
		i++;
		u++;
	}
	write(1, "c\n", 2);
	res[u] = '\0';
	return (res);
}
