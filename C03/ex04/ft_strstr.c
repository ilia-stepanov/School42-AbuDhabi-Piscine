/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 06:30:21 by istepano          #+#    #+#             */
/*   Updated: 2023/07/16 14:34:17 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_same(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
	{
		if (!str[i])
			return (0);
		if (to_find[i] != str[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*str_copy;

	str_copy = str;
	i = 0;
	if (to_find[0] == '\0')
		return (str_copy);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (is_same(str_copy, to_find))
				return (str_copy);
		}
		i++;
		str_copy++;
	}
	return ((void *)0);
}
