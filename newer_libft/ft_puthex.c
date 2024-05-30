/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:45:24 by akuburas          #+#    #+#             */
/*   Updated: 2024/01/09 09:38:55 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(unsigned int nbr, int uppercase, int *length)
{
	const char	*hex_digits;

	if (uppercase == 0)
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		if (ft_puthex(nbr / 16, uppercase, length) == -1)
			return (-1);
	}
	(*length)++;
	if (write(2, &(hex_digits[nbr % 16]), 1) == -1)
		return (-1);
	return (*length);
}
