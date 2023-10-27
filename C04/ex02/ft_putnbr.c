/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:21:49 by istepano          #+#    #+#             */
/*   Updated: 2023/07/17 13:49:27 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_length(int nb)
{
	int	i;

	i = 0;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	power(int degree)
{
	int	res;

	res = 1;
	while (degree)
	{
		res *= 10;
		degree--;
	}
	return (res);
}

void	ft_putnbr(int nb)
{
	int		len;
	char	digit;
	long	nb2;

	nb2 = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb2 = -nb2;
	}
	if (nb2 == -0)
		write(1, "0", 1);
	len = find_length(nb2);
	while (len)
	{
		digit = (nb2 / power(len - 1)) + '0';
		write(1, &digit, 1);
		nb2 = nb2 % power(len - 1);
		len--;
	}
}
