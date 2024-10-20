/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 22:03:39 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/19 22:03:39 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*dest;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = (char *)s1;
	while (*start != '\0' && ft_strchr(set, *start))
		start++;
	end = (char *)s1 + ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *end))
		end--;
	len = (end - start) + 1;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, start, (len + 1));
	return (dest);
}
