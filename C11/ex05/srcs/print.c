/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:10:24 by istepano          #+#    #+#             */
/*   Updated: 2023/07/28 17:21:48 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(long nb)
{
	char	digit;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-1", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	digit = '0' + (nb % 10);
	write(1, &digit, 1);
}

int	power(int degree)
{
	int	s;

	s = 1;
	while (degree)
	{
		s *= 10;
		degree--;
	}
	return (s);
}

int	get_number(char *str, int is_negative)
{
	int		len;
	long	s;

	s = 0;
	len = 0;
	while (str[len] >= '0' && str[len] <= '9')
		len++;
	while (len)
	{
		s += (str[0] - '0') * power(len - 1);
		len--;
		str++;
	}
	if (is_negative)
		return (-s);
	return (s);
}

int	ft_atoi(char *str)
{
	int		minuses;
	long	num;

	minuses = 0;
	while ((str[0] >= 9 && str[0] < 13) || str[0] == 32)
		str++;
	while (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
			minuses++;
		str++;
	}
	minuses = minuses % 2;
	if (!(str[0] >= '0') && !(str[0] <= '9'))
		return (0);
	num = get_number(str, minuses);
	return (num);
}
