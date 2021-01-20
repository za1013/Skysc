/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:39:32 by sbea              #+#    #+#             */
/*   Updated: 2020/10/28 18:13:16 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t idx;

	if (!dst && !src)
		return (NULL);
	idx = 0;
	while (idx < size)
	{
		((unsigned char*)dst)[idx] = ((unsigned char*)src)[idx];
		idx++;
	}
	return (dst);
}
