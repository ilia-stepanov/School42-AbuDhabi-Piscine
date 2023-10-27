/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:27:26 by istepano          #+#    #+#             */
/*   Updated: 2023/07/18 15:43:54 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	middle;
	int	i;

	i = 5;
	middle = nb / 2;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb < 2 || !(nb % 2) || !(nb % 3))
		return (0);
	while (i <= middle)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
