/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 16:39:49 by istepano          #+#    #+#             */
/*   Updated: 2023/07/22 18:43:38 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	get_lenstrs(int size, char **strs, char *sep)
{
	int	i;
	int	len_strs;
	int	len_sep;
	int	j;

	if (!size || !strs)
		return (1);
	len_sep = 0;
	while (sep[len_sep])
		len_sep++;
	i = 0;
	len_strs = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len_strs++;
			j++;
		}
		i++;
	}
	len_strs += len_sep * (size - 1) + 1;
	return (len_strs);
}

void	put_end(int size, char *str, int len_strs)
{
	if (!size)
		str[0] = '\0';
	else
		str[len_strs - 1] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_sep;
	int		len_strs;
	char	*dest;
	int		i;
	int		j;

	if (!size)
		return (malloc(sizeof(char)));
	len_strs = get_lenstrs(size, strs, sep);
	dest = malloc(len_strs * sizeof(char));
	if (dest == (void *)0)
		return ((void *)0);
	put_end(size, dest, len_strs);
	len_strs = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[len_strs++] = strs[i][j++];
		len_sep = 0;
		while (sep[len_sep] && (i < size - 1))
			dest[len_strs++] = sep[len_sep++];
	}
	return (dest);
}
