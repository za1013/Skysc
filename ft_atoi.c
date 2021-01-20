/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:50:56 by sbea              #+#    #+#             */
/*   Updated: 2020/11/02 12:24:58 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		number_start(const char *str)
{
	int		idx;
	char	c;

	idx = 0;
	while (str[idx])
	{
		c = str[idx];
		if (c == '\t' || c == '\n')
			idx++;
		else if (c == '\v' || c == '\f')
			idx++;
		else if (c == '\r' || c == ' ')
			idx++;
		else
			break ;
	}
	return (idx);
}

int		number_end(const char *str)
{
	int	start;
	int	cnt;

	start = number_start(str);
	cnt = 0;
	if (str[start] == '-' || str[start] == '+')
		cnt++;
	while (str[start + cnt])
	{
		if (ft_isdigit(str[start + cnt]))
			cnt++;
		else
			break ;
	}
	return (cnt);
}

int		ft_atoi(const char *str)
{
	int			start;
	int			end;
	long long	sum;
	long long	add;

	if (!str)
		return (0);
	start = number_start(str);
	end = number_end(str) + start;
	sum = 0;
	add = 1;
	if (str[start] == '-')
		add = -1;
	if (str[start] == '+' || str[start] == '-')
		start++;
	while (start <= --end)
	{
		sum += (long long)((str[end] - 48) * add);
		add *= 10;
	}
	return (int)(sum);
}
