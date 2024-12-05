/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 21:46:46 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/20 21:46:46 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
//RECURSIVE VERSION
/*
int	ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	else
		return (1 + ft_lstsize(lst->next));
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

int	main(void)
{
	t_list	*lst;
	char	*contents[] = {"Hello", "World", "42"};

	lst = NULL;
	ft_print_list(lst);
	printf("Size of list : %d\n", ft_lstsize(lst));
	for (size_t i = 0; i < sizeof(contents) / sizeof(contents[0]); i++)
	{
		t_list	*node = ft_lstnew(contents[i]);
		if (!node)
			printf("Memory allocation failed.\n");
		else
			ft_lstadd_back(&lst, node);
	}
	ft_print_list(lst);
	printf("Size of list : %d\n", ft_lstsize(lst));
	ft_lstclear(&lst, &ft_del_content);
	ft_print_list(lst);
	printf("Size of list : %d\n", ft_lstsize(lst));
	return (0);
}
*/