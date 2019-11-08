/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:07:53 by lryst             #+#    #+#             */
/*   Updated: 2019/11/07 16:10:59 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int u;
	char *dest;

	if (s1 == NULL || s1[0] == '\0')
		return (NULL);
	u = ft_strlen((char *)s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (u != -1 && ft_strchr(set, s1[u]))
		u--;
	dest = ft_strndup((char *)s1 + i, u - i == 0 ? 1 : u - i);
	if (dest == NULL)
		return (NULL);
	u - i == 0 ? dest[1] = '\0' : 0;
	return (dest);
}