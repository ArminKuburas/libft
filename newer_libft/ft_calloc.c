/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:20:27 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/15 15:03:00 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_calloc.c
 * @brief this file contains the ft_calloc function.
*/

/**
 * @brief Allocates memory for an pointer array and sets each element to zero.
 * @param count The amount of elements in the array.
 * @param size The size of each element.
 * @return Returns a pointer to the allocated memory or returns NULL.
*/
void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (!count || !size)
		return (ft_calloc(1, 1));
	total_size = count * size;
	if ((count != 0 && total_size / count != size) || total_size > 2147483648)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	if (ptr)
		ft_memset(ptr, 0, total_size);
	return (ptr);
}
