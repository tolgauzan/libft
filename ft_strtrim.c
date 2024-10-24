/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 02:44:50 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/23 02:44:50 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start_index;
	char	*end_index;
	char	*dest;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start_index = (char *)s1;
	while (*start_index != '\0' && ft_strchr(set, *start_index))
		start_index++;
	end_index = (char *)s1 + ft_strlen(s1) - 1;
	while (end_index > start_index && ft_strchr(set, *end_index))
		end_index--;
	len = (end_index - start_index) + 1;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, start_index, (len + 1));
	return (dest);
}
