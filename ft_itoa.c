/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 12:00:06 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:32:35 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_cnt(int n)
{
	size_t	cnt;

	cnt = 1;
	if (n < 0)
		cnt++;
	while (n / 10 != 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	len = get_cnt(n);
	result = (char*)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	result[len--] = 0;
	while (n / 10 != 0)
	{
		if (n < 0)
			result[len--] = (n % 10 * -1) + 48;
		else
			result[len--] = n % 10 + 48;
		n /= 10;
	}
	if (n < 0)
		result[len] = (n % 10 * -1) + 48;
	else
		result[len] = n % 10 + 48;
	return (result);
}
