/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 12:31:58 by sbea              #+#    #+#             */
/*   Updated: 2020/10/22 14:32:42 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_start(char const *s, char c, size_t start)
{
	while (s[start])
	{
		if (s[start] != c)
			return (start);
		start++;
	}
	return (start);
}

size_t	str_end(char const *s, char c, size_t start)
{
	while (s[start])
	{
		if (s[start] == c)
			return (start);
		start++;
	}
	return (start);
}

size_t	list_size(char const *s, char c)
{
	size_t start;
	size_t size;
	size_t len;

	start = 0;
	size = 0;
	len = ft_strlen(s);
	while (start <= len)
	{
		start = str_start(s, c, start);
		if (start >= len)
			return (size);
		start = str_end(s, c, start) + 1;
		size++;
	}
	return (size);
}

char	**create_list(char const *s, char c, size_t size)
{
	char	**list;
	char	*tmp;
	size_t	start;
	size_t	idx;
	size_t	end;

	start = 0;
	list = (char**)malloc(sizeof(char*) * (size + 1));
	if (!list)
		return (NULL);
	list[size] = NULL;
	idx = 0;
	while (idx < size)
	{
		start = str_start(s, c, start);
		end = str_end(s, c, start);
		tmp = ft_substr(s, start, end - start);
		start = end + 1;
		list[idx++] = tmp;
	}
	return (list);
}

char	**ft_split(char	const *s, char c)
{
	size_t	size;

	if (!s)
		return (NULL);
	size = list_size(s, c);
	return (create_list(s, c, size));
}
