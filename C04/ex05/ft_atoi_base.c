/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:30:53 by istepano          #+#    #+#             */
/*   Updated: 2023/07/20 17:26:18 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_error(char *str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len])
	{
		if (str[len] == '+' || str[len] == '-')
			return (0);
		if (str[len] < 32 || str[len] > 126)
			return (0);
		i = 1;
		while (str[len + i])
		{
			if (str[len] == str[len + i])
				return (0);
			i++;
		}
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (!power)
		return (1);
	if (power < 0)
		return (0);
	while (power)
	{
		res *= nb;
		power--;
	}
	return (res);
}

int	get_len(char *str, char *base)
{
	int	i;
	int	j;
	int	flag;
	int	res;

	i = 0;
	res = 0;
	flag = 1;
	while (str[i] && flag)
	{
		flag = 0;
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				flag = 1;
				res++;
				break ;
			}
			j++;
		}
		i++;
	}
	return (res);
}

int	get_num(char *str, int is_negative, char *base)
{
	int		i;
	int		j;
	long	res;
	int		num_len;
	int		base_len;

	base_len = is_error(base);
	num_len = get_len(str, base);
	res = 0;
	i = 0;
	while (num_len--)
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				res += j * ft_iterative_power(base_len, num_len);
				break ;
			}
			j++;
		}
		i++;
	}
	return (res * is_negative);
}

int	ft_atoi_base(char *str, char *base)
{
	int		minuses;
	int		i;
	long	num;

	i = 0;
	minuses = 0;
	if (!is_error(base))
		return (0);
	while ((str[0] >= 9 && str[0] <= 13) || str[0] == 32)
		str++;
	while (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
			minuses++;
		str++;
	}
	if (minuses % 2)
		minuses = -1;
	else
		minuses = 1;
	num = get_num(str, minuses, base);
	return (num);
}
