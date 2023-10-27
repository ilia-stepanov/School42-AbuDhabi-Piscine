/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:46:56 by istepano          #+#    #+#             */
/*   Updated: 2023/07/27 11:21:27 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap_str(&tab[i], &tab[i + 1]);
				flag = 1;
				break ;
			}
			i++;
		}
	}
}
