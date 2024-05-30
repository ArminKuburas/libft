/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:46:48 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:30:46 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_bzero.c
 * @brief this file contains the ft_bzero function.
*/

/**
 * @brief Writes n zeroed bytes to the string s.
 * @param s The string to be zeroed.
 * @param n The amount of bytes to be zeroed.
 * @return void
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
