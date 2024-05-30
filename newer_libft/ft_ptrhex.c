/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrhex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:41:02 by akuburas          #+#    #+#             */
/*   Updated: 2024/01/09 09:38:36 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ptrhex(unsigned long ptr, int *length)
{
	const char	*hex_digits;
	int			check;

	hex_digits = "0123456789abcdef";
	if (ptr >= 16)
	{
		if (ft_ptrhex(ptr / 16, length) == -1)
			return (-1);
	}
	(*length)++;
	check = write(2, (&hex_digits[ptr % 16]), 1);
	if (check == -1)
		return (-1);
	return (*length);
}
