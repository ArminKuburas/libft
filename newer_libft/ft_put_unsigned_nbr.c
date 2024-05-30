/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:24:24 by akuburas          #+#    #+#             */
/*   Updated: 2024/01/09 09:38:40 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_u_nbr(unsigned int n, int *length)
{
	char	digit;

	if (n / 10)
	{
		if (ft_put_u_nbr(n / 10, length) == -1)
			return (-1);
	}
	digit = '0' + (n % 10);
	if (write(2, &digit, 1) == -1)
		return (-1);
	(*length)++;
	return (*length);
}
