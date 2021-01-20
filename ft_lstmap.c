/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 17:39:48 by sbea              #+#    #+#             */
/*   Updated: 2020/10/29 19:21:19 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list *new;
	t_list *ele;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		ele = ft_lstnew((*f)(lst->content));
		if (!ele)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, ele);
		lst = lst->next;
	}
	return (new);
}
