/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:38:11 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:35:54 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		idx;

	idx = 0;
	while (idx < len)
	{
		*(unsigned char*)(b + idx) = (unsigned char)c;
		idx++;
	}
	return (b);
}
