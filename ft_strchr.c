/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:49:23 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:37:57 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t idx;
	size_t len;

	idx = 0;
	len = ft_strlen(s);
	while (idx <= len)
	{
		if (s[idx] == (char)c)
			return (char*)(s + idx);
		idx++;
	}
	return (NULL);
}
