/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_hash.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:06:26 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/30 13:18:17 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file create_hash.c
 * @brief Creates a hash value from a string.
*/

/**
 * @brief Creates a hash value from a string via djb2 method.
 * @param str The string to be hashed.
 * @return The hash value.
*/
unsigned long	create_hash(unsigned char *str)
{
	unsigned long	hash;
	int				i;

	hash = 5381;
	i = 0;
	while (str[i])
	{
		hash = ((hash << 5) + hash) + str[i];
		i++;
	}
	return (hash);
}
