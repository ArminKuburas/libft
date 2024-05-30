/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:27:33 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/30 13:19:59 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_isalnum.c
 * @brief Tests for any character for which isalpha or isdigit is true.
*/

/**
 * @brief Tests for any character for which isalpha or isdigit is true.
 * @param c The character to test.
 * @return Non-zero if the character tests true, zero if false.
*/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
