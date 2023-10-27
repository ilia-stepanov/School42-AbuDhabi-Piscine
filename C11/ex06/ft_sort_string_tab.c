/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:32:47 by istepano          #+#    #+#             */
/*   Updated: 2023/07/27 11:19:38 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
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

void	ft_swap_str(char **a, char **b)
{
	char	*a_temp;

	a_temp = *a;
	*a = *b;
	*b = a_temp;
}

int	len(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int	flag;
	int	i;
	int	size;

	size = len(tab);
	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap_str(&tab[i], &tab[i + 1]);
				flag = 1;
				break ;
			}
			i++;
		}
	}
}
