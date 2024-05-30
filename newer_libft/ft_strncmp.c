/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:38:31 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:29:28 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_strncmp.c
 * @brief this file contains the ft_strncmp function.
*/

/**
 * @brief Compares two strings.
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The amount of characters to be compared.
 * @return Returns the difference between the first differing characters.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n > 0)
	{
		u1 = (unsigned char)*s1;
		u2 = (unsigned char)*s2;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
