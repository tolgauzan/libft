/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:37:26 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/20 23:37:26 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mappedlist;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	mappedlist = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (node == NULL)
		{
			ft_lstclear(&mappedlist, del);
			return (NULL);
		}
		ft_lstadd_back(&mappedlist, node);
		lst = lst->next;
	}
	return (mappedlist);
}
