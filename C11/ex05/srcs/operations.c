/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:37:18 by istepano          #+#    #+#             */
/*   Updated: 2023/07/28 16:51:45 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	subtract(int val1, int val2)
{
	return (val1 - val2);
}

int	add(int val1, int val2)
{
	return (val1 + val2);
}

int	divide(int val1, int val2)
{
	return (val1 / val2);
}

int	multiply(int val1, int val2)
{
	return (val1 * val2);
}

int	remind(int val1, int val2)
{
	return (val1 % val2);
}
