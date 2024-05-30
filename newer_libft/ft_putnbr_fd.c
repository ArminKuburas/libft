/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 09:09:58 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:25:07 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_putnbr_fd.c
 * @brief this file contains the ft_putnbr_fd function.
*/

/**
 * @brief Outputs an integer to a file descriptor.
 * @param n The integer to be outputted.
 * @param fd The file descriptor to be used.
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	long	num;

	num = (long)n;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	if (n / 10)
		ft_putnbr_fd(num / 10, fd);
	digit = '0' + (num % 10);
	write(fd, &digit, 1);
}
