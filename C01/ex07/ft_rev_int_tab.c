/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:52:09 by istepano          #+#    #+#             */
/*   Updated: 2023/07/13 19:19:52 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int *a, int *b)
{
	int	a_temp;

	a_temp = *a;
	*a = *b;
	*b = a_temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	max_size;

	max_size = size / 2;
	i = 0;
	while (i < max_size) 
	{
		swap(&tab[i], &tab[size - i - 1]);
		i++;
	}
}
