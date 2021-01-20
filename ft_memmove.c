/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:41:47 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:38:22 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t idx;

	if (!dst && !src)
		return (NULL);
	idx = 0;
	if (src >= dst)
	{
		while (idx < n)
		{
			((unsigned char*)dst)[idx] = ((unsigned char*)src)[idx];
			idx++;
		}
	}
	else
	{
		idx = n - 1;
		while (n--)
		{
			((unsigned char*)dst)[idx] = ((unsigned char*)src)[idx];
			idx--;
		}
	}
	return (dst);
}
