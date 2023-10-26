/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:05:12 by akuburas          #+#    #+#             */
/*   Updated: 2023/10/26 12:20:18 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = 0;
	while (needle[needle_len] != '\0')
	{
		needle_len++;
	}
	if (needle_len == 0)
	{
		return ((char *)haystack);
	}
	while (*haystack != '\0' && len >= needle_len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, needle_len))
			return ((char *)heystack);
		haystack++;
		len--;
	}
	return (NULL);
}
