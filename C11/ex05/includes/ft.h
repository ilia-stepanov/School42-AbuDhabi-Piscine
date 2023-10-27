/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: istepano <istepano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:10:33 by istepano          #+#    #+#             */
/*   Updated: 2023/07/28 17:02:27 by istepano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdio.h>
# include <unistd.h>

int		subtract(int val1, int val2);
int		add(int val1, int val2);
int		divide(int val1, int val2);
int		multiply(int val1, int val2);
int		remind(int val1, int val2);
void	ft_putstr(char *str);
void	ft_putnbr(long nb);
int		power(int degree);
int		get_number(char *str, int is_negative);
int		ft_atoi(char *str);

#endif