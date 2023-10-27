/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:55:01 by istepano          #+#    #+#             */
/*   Updated: 2023/07/18 11:29:15 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (!nb)
		return (1);
	if (nb < 0)
		return (0);
	while (nb)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
