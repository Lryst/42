/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 10:41:03 by lryst             #+#    #+#             */
/*   Updated: 2019/10/10 11:51:46 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char	*ft_strdup(const char *s1)
{
	char *dest;
	int i;

	i = 0;
	if (s1 != 0)
	{
		dest = (char *)malloc(sizeof(char) * i + 1);
		if (dest == 0)
			return (NULL);
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
