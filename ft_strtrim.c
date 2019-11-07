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

	u = ft_strlen((char *)s1);
	i = 0;
	if (i == u || s1[i] == '\0')
		return (NULL);
	while (ft_strspn((char *)set, s1[i]) != 0)
		i++;
	while (ft_strrchr(set, s1[u]) != 0)
		u--;
	return (ft_strndup((char *)s1, (ft_strlen((char *)s1) - i - u)));
}

int main()
{
	char str[] = "bonjour les copains";
	char set[] = " yo yo";
	printf("FT_STRTRIM%s\n", ft_strtrim(str, set));
	printf("STRTRIM%d\n", strtrim(str, set));
	return (0);
}