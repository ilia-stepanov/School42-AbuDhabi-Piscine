/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 17:50:52 by istepano          #+#    #+#             */
/*   Updated: 2023/07/17 13:48:22 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	len;
	int	s;

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
	int	minuses;
	int	i;
	int	num;

	i = 0;
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
