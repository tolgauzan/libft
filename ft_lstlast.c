/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 22:03:43 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/20 22:03:43 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
//RECURSIVE VERSION
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst || !lst->next)
		return (lst);
	else
		return (ft_lstlast(lst->next));
}
*/
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

void	ft_print_last(t_list *lst)
{
	t_list	*last = ft_lstlast(lst);
	if (!last)
		printf("Empty list.\n");
	else
		printf("Last node of list : %s\n", (char *)last->content);
}

int	main(void)
{
	t_list	*lst;
	char	*contents[] = {"Hello", "World", "42"};

	lst = NULL;
	ft_print_list(lst);
	ft_print_last(lst);
	for (size_t i = 0; i < sizeof(contents) / sizeof(contents[0]); i++)
	{
		t_list	*node = ft_lstnew(contents[i]);
		if (!node)
			printf("Memory allocation failed.\n");
		else
			ft_lstadd_back(&lst, node);
	}
	ft_print_list(lst);
	ft_print_last(lst);
	ft_lstclear(&lst, &ft_del_content);
	return (0);
}
*/