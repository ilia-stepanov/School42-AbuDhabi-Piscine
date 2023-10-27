/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:27:15 by istepano          #+#    #+#             */
/*   Updated: 2023/07/22 14:58:31 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	i;
	int		res;

	if (min >= max)
	{
		*range = ((void *)0);
		return (0);
	}
	i = 0;
	res = max - min;
	*range = malloc(res * sizeof(int));
	if (*range == (void *)0)
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (res);
}
