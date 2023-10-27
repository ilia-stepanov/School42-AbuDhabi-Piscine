/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:21:30 by istepano          #+#    #+#             */
/*   Updated: 2023/07/22 14:58:31 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long	i;
	int		*dest;

	i = 0;
	if (min >= max)
		return ((void *)0);
	dest = malloc((max - min) * sizeof(int));
	while (min < max)
		dest[i++] = min++;
	return (dest);
}
