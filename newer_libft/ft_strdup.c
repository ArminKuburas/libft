/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:40:19 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:25:55 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_strdup.c
 * @brief this file contains the ft_strdup function.
*/

/**
 * @brief Duplicates a string.
 * @param s The string to be duplicated.
 * @return Returns a pointer to the new string or returns NULL.
*/
char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*new_str;

	len = ft_strlen(s);
	new_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (new_str)
	{
		ft_memcpy(new_str, s, len);
	}
	else
		return (NULL);
	return (new_str);
}
