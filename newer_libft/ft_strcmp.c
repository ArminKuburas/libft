/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:50:22 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:25:36 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_strcmp.c
 * @brief this file contains the ft_strcmp function.
*/

/**
 * @brief Compares two strings.
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @return Returns the difference between the two strings.
*/
int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (i[s1] || i[s2])
	{
		if (i[s1] != i[s2])
			return (i[s1] - i[s2]);
		i++;
	}
	return (0);
}
