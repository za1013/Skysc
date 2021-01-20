/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 21:27:49 by sbea              #+#    #+#             */
/*   Updated: 2020/10/22 14:32:55 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_start(char const *s1, char const *set)
{
	size_t	idx;
	size_t	jdx;
	int		tri;

	idx = 0;
	while (s1[idx])
	{
		tri = 0;
		jdx = 0;
		while (set[jdx])
		{
			if (s1[idx] == set[jdx])
			{
				tri = 1;
				break ;
			}
			jdx++;
		}
		if (!tri)
			break ;
		idx++;
	}
	return (idx);
}

size_t	get_end(char const *s1, char const *set)
{
	size_t	idx;
	size_t	jdx;
	int		tri;

	idx = ft_strlen(s1) - 1;
	while (s1[idx])
	{
		tri = 0;
		jdx = 0;
		while (set[jdx])
		{
			if (s1[idx] == set[jdx])
			{
				tri = 1;
				break ;
			}
			jdx++;
		}
		if (!tri || idx < 1)
			break ;
		idx--;
	}
	return (idx);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*tmp;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start >= end)
	{
		tmp = (char*)malloc(sizeof(char));
		tmp[0] = '\0';
		return (tmp);
	}
	return (ft_substr(s1, (unsigned int)start, end - start + 1));
}
