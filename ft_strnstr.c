/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:57:59 by stunca            #+#    #+#             */
/*   Updated: 2022/02/10 03:10:43 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	indx;
	size_t	indx2;

	if (*needle == '\0')
		return ((char *)haystack);
	indx = 0;
	while (haystack[indx] && indx < len)
	{
		indx2 = 0;
		while (needle[indx2] && haystack[indx + indx2]
			&& haystack[indx + indx2] == needle[indx2]
			&& (indx + indx2) < len)
			indx2++;
		if (needle[indx2] == '\0')
			return ((char *)haystack + indx);
		indx++;
	}
	return (NULL);
}
