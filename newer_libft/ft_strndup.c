/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:44:37 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:29:50 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_strndup.c
 * @brief this file contains the ft_strndup function.
*/

/**
 * @brief Duplicates a string up to n characters.
 * @param s The string to be duplicated.
 * @param n The amount of characters to be duplicated.
 * @return Returns a pointer to the new string or returns NULL.
*/
char	*ft_strndup(const char *s, size_t n)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s);
	new_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (new_str)
	{
		ft_memcpy(new_str, s, n);
	}
	return (new_str);
}
