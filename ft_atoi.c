/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lryst <lryst@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:27:00 by lryst             #+#    #+#             */
/*   Updated: 2019/10/14 13:39:08 by lryst            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char u)
{
	write(1, &u, 1);
}

int	ft_atoi(const char *str)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || (str[i] >= 48 && str[i] <= 57))
			i++;
		if ((str[i] == '+' || str[i] == '-') && (str[i + 1] >= 48 && str[i + 1] <= 57))
		{
			while (str[i + 1] >= 48 && str[i + 1] <= 57)
				nb = str[i] + 48;
		}
		else if (!((str[i] >= 9 || str[i] <= 13) && (str[i] >= 48 || str[i] <= 57) && (str[i] == '+' && str[i] == '-') || (str[i + 1] >= 48 || str[i + 1] <= 57)))
			return (0);
	}
	return (nb);
}

int main(int ac, char **av)
{
	if (ac == 2)
	
	printf("%d\n", ft_atoi(av[1]));
	printf("%d\n", atoi(av[1]));
	return (0);
}