/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:45:53 by sbea              #+#    #+#             */
/*   Updated: 2020/10/22 17:40:11 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t idx;

	idx = 0;
	while (idx < n)
	{
		if (((unsigned char*)s1)[idx] != ((unsigned char*)s2)[idx])
			return (((unsigned char*)s1)[idx] - ((unsigned char*)s2)[idx]);
		idx++;
	}
	return (0);
}
