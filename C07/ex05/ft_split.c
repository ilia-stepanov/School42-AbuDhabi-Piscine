/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 08:31:20 by istepano          #+#    #+#             */
/*   Updated: 2023/07/26 08:04:25 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	isin(char str, char *charset, int mode)
{
	int	i;

	i = 0;
	if (!mode)
	{
		while (charset[i])
			i++;
		return (i);
	}
	if (mode)
	{
		while (charset[i])
		{
			if (str == charset[i])
				return (1);
			i++;
		}
		return (0);
	}
	return (0);
}

int	*label(char *str, char *charset, int j)
{
	int	*arr;
	int	i;
	int	flag;

	flag = 1;
	i = -1;
	arr = malloc((isin('0', str, 0) + 2) * sizeof(int));
	while (str[++i])
	{
		if (!isin(str[i], charset, 1) && flag)
		{
			arr[j++] = i;
			flag = 0;
		}
		else if (isin(str[i], charset, 1) && !flag)
		{
			arr[j++] = i;
			flag = 1;
		}
	}
	if (!flag)
		arr[j++] = i;
	arr[j] = -1;
	return (arr);
}

char	*insert(int *indices, char *str, int i)
{
	int		st;
	int		fn;
	int		size;
	char	*res;
	int		j;

	j = 0;
	st = indices[i * 2];
	if (st == -1)
	{
		res = malloc(sizeof(char));
		res = 0;
		return (res);
	}
	fn = indices[i * 2 + 1];
	size = fn - st;
	res = malloc((size + 1) * sizeof(char));
	while (st < fn)
		res[j++] = str[st++];
	res[j] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		*indices;
	int		size;
	char	**res;
	int		i;

	size = 0;
	i = 0;
	indices = label(str, charset, i);
	while (indices[size] != -1)
		size++;
	size /= 2;
	res = malloc((size + 1) * sizeof(char *));
	while (i <= size)
	{
		res[i] = insert(indices, str, i);
		i++;
	}
	return (res);
}
