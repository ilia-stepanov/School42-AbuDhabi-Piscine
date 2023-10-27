/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 09:33:48 by istepano          #+#    #+#             */
/*   Updated: 2023/07/28 18:11:04 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	int		i;

	i = 0;
	len = ft_strlen(src) + 1;
	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return ((void *)0);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	insert_struct(char *arr, t_stock_str *dict)
{
	dict->size = ft_strlen(arr);
	dict->str = arr;
	dict->copy = ft_strdup(arr);
}

struct s_stock_str	*fill_error(t_stock_str *dict)
{
	dict = malloc(sizeof(t_stock_str));
	if (dict == (void *)0)
		return ((void *)0);
	dict[0].size = 0;
	dict[0].str = 0;
	dict[0].copy = 0;
	return (dict);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = ((void *)0);
	if (ac <= 0)
		return (fill_error(stock));
	stock = malloc((ac + 1) * sizeof(t_stock_str));
	if (stock == 0)
		return (0);
	i = 0;
	while (i < ac)
	{
		insert_struct(av[i], &stock[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].copy = 0;
	stock[i].size = 0;
	return (stock);
}
