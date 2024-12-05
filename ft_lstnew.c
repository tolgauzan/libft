/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:30:13 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/20 20:30:13 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void	*content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
//TEST CASES
#include <stdio.h>

int	main(void)
{
	int		data1 = 42;
	char	*data2 = "Hello";
	t_list	*node1 = ft_lstnew(&data1);
	t_list	*node2 = ft_lstnew(data2);

	if (!node1)
		printf("Memory allocation failed.\n");
	else
	{
		printf("First node content : %d\n", *(int *)node1->content);
		if (node1->next)
			printf("Member next is not NULL.\n");
	}
	if (!node2)
		printf("Memory allocation failed.\n");
	else
	{
		printf("Second node content : %s\n", (char *)node2->content);
		if (node2->next)
			printf("Member next is not NULL.\n");
	}
	free(node1);
	free(node2);
	return (0);
}
*/