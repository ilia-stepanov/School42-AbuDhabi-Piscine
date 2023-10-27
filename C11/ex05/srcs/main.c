/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:39:24 by istepano          #+#    #+#             */
/*   Updated: 2023/07/28 17:10:07 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	get_sign(char *sign)
{
	char	arr[6];
	int		i;

	i = -1;
	arr[0] = '-';
	arr[1] = '+';
	arr[2] = '/';
	arr[3] = '*';
	arr[4] = '%';
	arr[5] = '\0';
	while (sign[++i])
		if (i >= 1)
			return (-1);
	i = -1;
	while (arr[++i])
		if (arr[i] == sign[0])
			return (i);
	return (-1);
}

void	calculate(int val1, int val2, int sign)
{
	int	(*operations[5])(int, int);

	if (val2 == 0 && sign == 2)
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	if (val2 == 0 && sign == 4)
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	operations[0] = &subtract;
	operations[1] = &add;
	operations[2] = &divide;
	operations[3] = &multiply;
	operations[4] = &remind;
	ft_putnbr(operations[sign](val1, val2));
	ft_putstr("\n");
	return ;
}

int	main(int argc, char **argv)
{
	int		val1;
	int		val2;
	int		int_sign;

	if ((argc) != 4)
		return (0);
	val1 = ft_atoi(argv[1]);
	val2 = ft_atoi(argv[3]);
	int_sign = get_sign(argv[2]);
	if (int_sign == -1)
		ft_putstr("0\n");
	else
		calculate(val1, val2, int_sign);
}
