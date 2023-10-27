/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:04:56 by istepano          #+#    #+#             */
/*   Updated: 2023/07/20 20:26:45 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_error(char *str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len])
	{
		if (str[len] == '+' || str[len] == '-')
			return (0);
		if (str[len] < 32 || str[len] > 126)
			return (0);
		i = 1;
		while (str[len + i])
		{
			if (str[len] == str[len + i])
				return (0);
			i++;
		}
		len++;
	}
	if (len < 2)
		return (0);
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		extra;
	int		base_len;
	int		i;
	char	arr[100];
	long	nbr2;

	nbr2 = nbr;
	if (!nbr2)
		write(1, "0", 1);
	base_len = is_error(base);
	i = 0;
	if (nbr2 < 0 && base_len)
	{
		nbr2 = -nbr2;
		write(1, "-", 1);
	}
	while (nbr2 && base_len)
	{
		extra = nbr2 % base_len;
		nbr2 /= base_len;
		arr[i++] = base[extra];
	}
	arr[i--] = '\0';
	while (i >= 0 && base_len)
		write(1, &arr[i--], 1);
}
