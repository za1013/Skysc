/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:50:05 by sbea              #+#    #+#             */
/*   Updated: 2020/10/24 22:06:18 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	if (*needle == '\0')
		return (char*)(haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		n = 0;
		while (needle[n] && i + n < len && haystack[i + n] == needle[n])
			n++;
		if (!needle[n])
			return (char*)(haystack + i);
		i++;
	}
	return (NULL);
}
