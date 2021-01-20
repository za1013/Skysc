/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:46:21 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:41:37 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t dst_len;
	size_t src_len;
	size_t idx;

	if (!dst && !src)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	idx = 0;
	if (size <= dst_len)
		return (size + src_len);
	else
	{
		size -= dst_len + 1;
		while (idx < size && src[idx])
		{
			dst[dst_len + idx] = src[idx];
			idx++;
		}
		dst[dst_len + idx] = '\0';
		return (dst_len + src_len);
	}
}
