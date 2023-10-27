/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 20:42:51 by istepano          #+#    #+#             */
/*   Updated: 2023/07/16 14:33:53 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;

	i = len(dest);
	while (*src && nb)
	{
		dest[i] = src[0];
		src++;
		i++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
