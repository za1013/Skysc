/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:49:50 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 12:38:03 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int idx;

	idx = (int)ft_strlen(s);
	while (idx > -1)
	{
		if (s[idx] == (char)c)
			return (char*)(s + idx);
		idx--;
	}
	return (NULL);
}
