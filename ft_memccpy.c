/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:40:06 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:36:24 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t idx;

	idx = 0;
	while (idx < n)
	{
		((unsigned char*)dst)[idx] = ((unsigned char*)src)[idx];
		if (((unsigned char*)src)[idx] == (unsigned char)c)
			return (dst + idx + 1);
		idx++;
	}
	return (NULL);
}
