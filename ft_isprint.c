/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:54:55 by lryst             #+#    #+#             */
/*   Updated: 2019/10/07 17:07:14 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int u)
{
	if (u >= 32 && u <= 126)
		return (1);
	else
		return (0);
}
