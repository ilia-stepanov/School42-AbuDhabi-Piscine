/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 19:21:13 by istepano          #+#    #+#             */
/*   Updated: 2023/07/15 17:53:13 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	clean(char *str, int i)
{
	while (str[i - 1])
	{
		str[i - 1] = '\0';
		i++;
	}
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len_src;
	int	len_dest;
	int	i;

	i = 0;
	len_src = find_length(src);
	len_dest = find_length(dest);
	if (!size)
		return (len_src);
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size == 1 || len_dest >= size)
		clean(dest, size);
	return (len_src);
}
