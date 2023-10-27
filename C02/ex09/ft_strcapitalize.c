/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:07:45 by istepano          #+#    #+#             */
/*   Updated: 2023/07/15 13:30:29 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_alphanumeric(char c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (flag && (str[i] > 96 && str[i] < 123))
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		else if (!flag && (str[i] > 64 && str[i] < 91))
			str[i] = str[i] + 32;
		if (!ft_alphanumeric(str[i]))
			flag = 1;
		else
			flag = 0;
		i++;
	}
	return (str);
}
