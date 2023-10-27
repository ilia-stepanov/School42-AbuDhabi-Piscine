/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:53:25 by istepano          #+#    #+#             */
/*   Updated: 2023/07/13 19:19:36 by istepano         ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	flag;
	int	i;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				swap(&tab[i], &tab[i + 1]);
				flag = 1;
				break ;
			}
			i++;
		}
	}
}
