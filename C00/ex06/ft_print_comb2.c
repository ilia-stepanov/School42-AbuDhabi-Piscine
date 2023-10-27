/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:26:21 by istepano          #+#    #+#             */
/*   Updated: 2023/07/24 08:28:43 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int num)
{
	char	zero;
	char	string_num;
	char	space;

	zero = '0';
	if (num > 1)
	{
		write(1, ", ", 2);
	}
	if (num >= 1000)
	{
		string_num = (num / 1000) + '0';
		write(1, &string_num, 1);
	}
	else 
		write(1, &zero, 1);
	string_num = (num % 1000 / 100) + '0';
	write(1, &string_num, 1);
	write(1, " ", 1);
	string_num = (num % 1000 % 100 / 10) + '0';
	write(1, &string_num, 1);
	string_num = (num % 10) + '0';
	write(1, &string_num, 1);
}

void	ft_process(int *ln_ma, int *ln_tm, int *ln_global_tm, int *ski)
{
	*ln_ma = *ln_ma - 1;
	if (!*ln_ma)
	{
		*ln_ma = 100;
		*ln_tm = *ln_tm - 1 ;
	}
	if (!*ln_tm)
	{
		*ski = 10000;
	}
}

void	ft_print_comb(void)
{
	int		ln_global_tmp;
	int		ln_tmp;
	int		ln_max;
	int		skip;
	int		i;

	ln_global_tmp = 99;
	ln_tmp = 99;
	ln_max = 100;
	skip = 0;
	i = 0;
	while (i < 10000) 
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

int main(void)
{
	ft_print_comb();
}