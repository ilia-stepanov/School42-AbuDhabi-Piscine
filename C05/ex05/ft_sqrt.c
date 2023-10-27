/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iliastepanov <iliastepanov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:13:37 by istepano          #+#    #+#             */
/*   Updated: 2023/10/27 12:05:44 by iliastepano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	binary_search(long low_bound, long high_bound, long middle, int nb)
{
	if (low_bound > high_bound)
		return (0);
	else
	{
		middle = (low_bound + high_bound) / 2;
		if ((middle * middle) == nb)
			return (middle);
		else if (nb > (middle * middle))
			return (binary_search(middle + 1, high_bound, middle, nb));
		else
			return (binary_search(low_bound, middle - 1, middle, nb));
	}
}

int	ft_sqrt(int nb)
{
	long	low_bound;
	long	high_bound;
	long	middle;

	low_bound = 1;
	high_bound = nb / 2 + 1;
	middle = (low_bound + high_bound) / 2;
	return (binary_search(low_bound, high_bound, middle, nb));
}
