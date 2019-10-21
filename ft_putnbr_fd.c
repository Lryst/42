/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:06:54 by lryst             #+#    #+#             */
/*   Updated: 2019/10/21 16:07:32 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int nb, int fd)
{
    if (nb == -2147483648)
        write(fd, "-2147483648", 11);
    if (nb < 0)
        nb = nb * - 1;
    if (nb > 9)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
    else
        ft_putchar_fd(nb + 48, fd);
}