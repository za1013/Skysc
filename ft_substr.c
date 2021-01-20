/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 21:28:26 by sbea              #+#    #+#             */
/*   Updated: 2020/10/24 19:40:38 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*zero_cpy(void)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(char));
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	idx;
	char	*ptr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
		return (zero_cpy());
	idx = 0;
	ptr = (char*)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (idx < len && s[idx + start])
	{
		ptr[idx] = s[idx + start];
		idx++;
	}
	ptr[idx] = '\0';
	return (ptr);
}
