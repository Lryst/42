/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 15:54:12 by lryst             #+#    #+#             */
/*   Updated: 2019/10/07 17:10:42 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int u)
{
	if ((u >= 65 && u <= 90) || (u >= 97 && u <= 122))
		return (1);
	else
		return (0);
}
