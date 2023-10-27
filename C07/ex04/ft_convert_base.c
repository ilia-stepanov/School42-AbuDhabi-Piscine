/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:37:12 by istepano          #+#    #+#             */
/*   Updated: 2023/07/29 16:04:43 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	is_error(char *str);
int	ft_iterative_power(int nb, int power);
int	get_len(char *str, char *base);
int	get_num(char *str, int is_negative, char *base);
int	ft_atoi_base(char *str, char *base);

int	check(char *base_from, char *base_to)
{
	int	base_from_len;
	int	base_to_len;

	base_from_len = is_error(base_from);
	base_to_len = is_error(base_to);
	if (!base_from_len || !base_to_len)
		return (0);
	return (base_to_len);
}

char	*fill_arr(char *src, int size, char *base_to)
{
	char	*dest;
	int		i;
	int		flag;

	i = 0;
	flag = -1;
	if (size == -1)
	{
		dest = malloc(2 * sizeof(char));
		if (!dest)
			return (0);
		dest[0] = base_to[0];
		dest[1] = '\0';
		return (dest);
	}
	dest = malloc((size + 2) * sizeof(char));
	if (!dest)
		return (0);
	if (src[0] == '-' && flag++)
		dest[i++] = '-';
	while (size > flag)
		dest[i++] = src[size--];
	dest[i] = '\0';
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_len;
	int		i;
	char	arr[100];
	long	nbr2;

	base_len = check(base_from, base_to);
	if (!base_len)
		return ((void *) 0);
	i = 0;
	nbr2 = ft_atoi_base(nbr, base_from);
	if (!nbr2 && base_len)
		return (fill_arr(arr, -1, base_to));
	while (nbr2 && base_len)
	{
		if (nbr2 < 0 && !i)
		{
			nbr2 = -nbr2;
			arr[i++] = '-';
		}
		arr[i++] = base_to[nbr2 % base_len];
		nbr2 /= base_len;
	}
	if (i - 1 >= 0 && base_len)
		return (fill_arr(arr, i - 1, base_to));
	return ((void *) 0);
}
