/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 17:52:00 by istepano          #+#    #+#             */
/*   Updated: 2023/07/18 17:23:34 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (!power)
		return (1);
	if (power < 0)
		return (0);
	while (power - 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
