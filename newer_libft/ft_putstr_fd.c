/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:01:45 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:25:20 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putstr_fd.c
 * @brief this file contains the ft_putstr_fd function.
*/

/**
 * @brief Outputs a string to a file descriptor.
 * @param s The string to be outputted.
 * @param fd The file descriptor to be used.
*/
void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
