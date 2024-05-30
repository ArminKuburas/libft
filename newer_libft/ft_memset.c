/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:19:01 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:31:29 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_memset.c
 * @brief this file contains the ft_memset function.
*/

/**
 * @brief Writes len bytes of value c to the string b.
 * @param b The string to be written to.
 * @param c The value to be written.
 * @param len The amount of bytes to be written.
 * @return Returns a pointer to the memory area b.
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len > 0)
	{
		*(ptr) = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}
