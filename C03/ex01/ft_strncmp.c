/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:02:29 by istepano          #+#    #+#             */
/*   Updated: 2023/07/16 14:32:32 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i] && s1[i] && s2[i])
			return (s1[i] - s2[i]);
		if (!s1[i])
			return (-s2[i]);
		if (!s2[i])
			return (s1[i]);
		i++;
	}
	return (0);
}
