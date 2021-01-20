/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 22:08:15 by sbea              #+#    #+#             */
/*   Updated: 2020/10/22 12:51:54 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *target;

	if (lst)
	{
		target = *lst;
		if (!target)
			*lst = new;
		else
		{
			while (target->next)
			{
				target = target->next;
			}
			target->next = new;
		}
	}
}
