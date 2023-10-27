/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:17:40 by istepano          #+#    #+#             */
/*   Updated: 2023/07/27 15:57:53 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;
	int	temp;

	i = 0;
	asc = 1;
	desc = 1;
	while (++i < length && (asc || desc))
	{
		temp = f(tab[i - 1], tab[i]);
		if (temp > 0 && asc)
			asc = 0;
		if (temp < 0 && desc)
			desc = 0;
	}
	if (asc || desc)
		return (1);
	else
		return (0);
}
