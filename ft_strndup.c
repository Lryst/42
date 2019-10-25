/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:07:35 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:12:12 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, int n)
{
	char *dest;
	int i;

	i = 0;
	if (n == 0 || s1 == NULL)
		return (NULL);
	while (s1[i] && i < n)
		i++;
	dest = (char *)malloc(sizeof(char) * i + 1);
	if (dest == 0)
		return (NULL);
	i = 0;
	while (s1[i] && i < n)
	{
		dest[i] = s1[i];
		i++;
	}
    dest[i] = '\0';
	return (dest);
}
