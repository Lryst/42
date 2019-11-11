/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:07:02 by lryst             #+#    #+#             */
/*   Updated: 2019/11/04 15:50:07 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int		count;
	int		i;

	count = 1;
	i = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i])
	{
		if (str[i] && str[i] != c)
			i++;
		str[i] == c ? count++ : 0;
		while (str[i] && str[i] == c)
			i++;
	}
	return (count);
}

char	*ft_mallocwords(char const *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!ft_strndup(str, i))
		return (NULL);
	return (ft_strndup(str, i));
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		u;

	i = ft_countwords(s, c);
	u = -1;
	tab = (char**)malloc(sizeof(char*) * i + 1);
	if (tab == NULL || s == NULL)
		return (NULL);
	while (*s && ++u < i)
	{
		while (*s && *s == c)
			s++;
		if (!ft_strndup(s, c))
			return (NULL);
		tab[u] = ft_mallocwords(s, c);
		while (*s && *s != c)
			s++;
	}
	tab[++u] = NULL;
	return (tab);
}

