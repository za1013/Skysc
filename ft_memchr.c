/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:42:25 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:40:05 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t idx;

	idx = 0;
	while (idx < n)
	{
		if (((unsigned char*)s)[idx] == (unsigned char)c)
			return (void*)(s + idx);
		idx++;
	}
	return (NULL);
}
