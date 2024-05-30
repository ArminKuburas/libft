/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:23:43 by akuburas          #+#    #+#             */
/*   Updated: 2024/01/09 09:38:59 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n, int *length)
{
	char	digit;
	long	num;

	num = (long)n;
	if (num < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		num = -num;
		(*length) += 1;
	}
	if (n / 10)
	{
		if (ft_putnbr(num / 10, length) == -1)
			return (-1);
	}
	digit = '0' + (num % 10);
	if (write(2, &digit, 1) == -1)
		return (-1);
	(*length)++;
	return (*length);
}
