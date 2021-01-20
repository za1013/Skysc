/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 21:28:50 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:32:14 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*result_str(size_t len1, size_t len2, char const *s1, char const *s2)
{
	char	*ptr;
	size_t	idx;

	ptr = (char*)malloc(sizeof(char) * (len1 + len2) + 1);
	if (!ptr)
		return (NULL);
	idx = 0;
	while (idx < len1)
	{
		ptr[idx] = s1[idx];
		idx++;
	}
	while (idx < len1 + len2)
	{
		ptr[idx] = s2[(idx) - len1];
		idx++;
	}
	ptr[idx] = 0;
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (char*)(s2);
	else if (!s2)
		return (char*)(s1);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	return (char*)(result_str(s1_len, s2_len, s1, s2));
}
