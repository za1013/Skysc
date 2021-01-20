/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:50:21 by sbea              #+#    #+#             */
/*   Updated: 2020/10/30 22:07:10 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t idx;

	if (!s1 && !s2)
		return (0);
	idx = 0;
	while (idx < n)
	{
		if ((size_t)s1[idx] > (size_t)s2[idx])
			return (1);
		else if ((size_t)s1[idx] < (size_t)s2[idx])
			return (-1);
		else if (!s1[idx] || !s2[idx])
			break ;
		idx++;
	}
	return (0);
}
