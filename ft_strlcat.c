/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuzan <tuzan@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:42:27 by tuzan             #+#    #+#             */
/*   Updated: 2024/10/22 20:42:27 by tuzan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;
	size_t	dlen;
	size_t	d;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	d = dlen;
	if (dsize <= dlen)
		return (dsize + slen);
	while (src[i] != '\0' && d < (dsize - 1))
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (dlen + slen);
}
