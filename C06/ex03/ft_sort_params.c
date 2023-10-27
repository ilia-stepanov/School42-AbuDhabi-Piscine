/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:05:32 by istepano          #+#    #+#             */
/*   Updated: 2023/07/19 12:10:22 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_arr(char **arr)
{
	int	str;
	int	chr;

	str = 1;
	while (arr[str])
	{
		chr = 0;
		while (arr[str][chr])
		{
			write(1, &arr[str][chr], 1);
			chr++;
		}
		write(1, "\n", 1);
		str++;
	}
}

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

void	ft_sort_arr(char **str, int size)
{
	int	flag;
	int	i;

	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 1;
		while (i < (size - 1))
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				ft_swap_str(&str[i], &str[i + 1]);
				flag = 1;
				break ;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	ft_sort_arr(argv, argc);
	ft_put_arr(argv);
}
