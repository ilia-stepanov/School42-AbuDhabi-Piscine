/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iliastepanov <iliastepanov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:29:30 by istepano          #+#    #+#             */
/*   Updated: 2023/10/27 12:10:35 by iliastepano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_count(int nb)
{
	int		cnt;

	cnt = 0;
	if (!nb)
	{
		cnt = 1;
	}
	while (nb)
	{
		nb /= 10;
		cnt++;
	}
	return (cnt);
}

int	power(int degree)
{
	int		num;

	num = 1;
	while (degree)
	{
		num *= 10;
		degree--;
	}
	return (num);
}

void	ft_putnbr(int nb)
{
	char	str_digit;
	int		tens;
	int		digit;
	int		cnt;
	int		pow;

	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	cnt = find_count(nb);
	while (cnt)
	{
		pow = power(cnt - 1);
		digit = nb / pow;
		if (cnt == 1)
			digit = nb % 10;
		str_digit = digit + '0';
		write(1, &str_digit, 1);
		nb = nb - (digit * pow);
		cnt--;
	}
}


void	ft_putnbr2(int nb)
{
	char	digit;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr2(nb / 10);
	digit = '0' + nb % 10;
	write(1, &digit, 1);
}
