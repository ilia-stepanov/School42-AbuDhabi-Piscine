/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 08:59:40 by istepano          #+#    #+#             */
/*   Updated: 2023/07/30 17:13:48 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		len_dest;
	unsigned int		len_src;
	unsigned int		j;
	unsigned int		res;

	j = 0;
	len_src = len(src);
	len_dest = len(dest);
	res = len_src + len_dest;
	if (!len_dest)
		res = len_src;
	if (len_dest >= size)
		res = len_src + size;
	while (len_dest < (size - 1) && src[j] && size)
		dest[len_dest++] = src[j++];
	dest[len_dest] = '\0';
	return (res);
}
