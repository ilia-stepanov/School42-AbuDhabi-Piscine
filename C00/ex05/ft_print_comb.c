/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:26:21 by istepano          #+#    #+#             */
/*   Updated: 2023/07/12 18:25:49 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int num)
{
	char	zero;
	char	string_num;
	char	space;

	zero = '0';
	if (num > 12)
	{
		write(1, ", ", 2);
	}
	if (num >= 100)
	{
		string_num = (num / 100) + '0';
		write(1, &string_num, 1);
	}
	else 
		write(1, &zero, 1);
	string_num = (num % 100 / 10) + '0';
	write(1, &string_num, 1);
	string_num = (num % 100 % 10) + '0';
	write(1, &string_num, 1);
}

void	ft_process(int *ln_ma, int *ln_tm, int *ln_global_tm, int *ski)
{
	*ln_ma = *ln_ma - 1;
	if (!*ln_ma)
	{
		*ln_ma = 10;
		*ln_tm = *ln_tm - 1 ;
	}
	if (!*ln_tm)
	{
		*ln_global_tm = *ln_global_tm - 1;
		*ln_tm = *ln_global_tm;
		*ski += 110;
	}
}

void	ft_print_comb(void)
{
	int		ln_global_tmp;
	int		ln_tmp;
	int		ln_max;
	int		skip;
	int		i;

	ln_global_tmp = 8;
	ln_tmp = 8;
	ln_max = 10;
	skip = 10;
	i = 10;
	while (i < 1000) 
	{
		if (i >= skip)
		{
			if (ln_max <= ln_tmp)
			{
				ft_print(i);
			}
			i++;
			ft_process(&ln_max, &ln_tmp, &ln_global_tmp, &skip);
		}
		else
			i++;
	}
}
