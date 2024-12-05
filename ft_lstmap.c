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
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	mappedlist = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (node == NULL)
		{
			del(new_content);
			ft_lstclear(&mappedlist, del);
			return (NULL);
		}
		ft_lstadd_back(&mappedlist, node);
		lst = lst->next;
	}
	return (mappedlist);
}
/*
//TEST CASES
#include <stdio.h>

void	ft_print_content(void *content)
{
	printf("\"%s\" -> ", (char *)content);
}

void	ft_print_list(t_list *lst)
{
	printf("Printing list : ");
	ft_lstiter(lst, &ft_print_content);
	printf("NULL\n");
}

void	ft_del_content(void *content)
{
	printf("deleting \"%s\"\n", (char *)content);
}

void	*ft_same(void *content)
{
	return (content);
}

int	main(void)
{
	t_list	*lst;
	char	*contents[] = {"Hello", "World", "42"};

	lst = NULL;
	ft_print_list(lst);
	for (size_t i = 0; i < sizeof(contents) / sizeof(contents[0]); i++)
	{
		t_list	*node = ft_lstnew(contents[i]);
		if (!node)
			printf("Memory allocation failed.\n");
		else
			ft_lstadd_back(&lst, node);
	}
	ft_print_list(lst);
	t_list	*lst_cap = ft_lstmap(lst, &ft_same, &ft_del_content);
	ft_print_list(lst_cap);
	ft_lstclear(&lst, &ft_del_content);
	ft_lstclear(&lst_cap, &ft_del_content);
	ft_print_list(lst);
	ft_print_list(lst_cap);
	return (0);
}
*/