/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:22:07 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/15 10:50:19 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_itoa.c
 * @brief Converts an integer to a string.
*/

/**
 * @brief Counts the number of digits in an integer.
 * @param n The integer to be counted.
 * @return The number of digits.
*/
static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/**
 * @brief Converts an integer to a string.
 * @param n The integer to be converted.
 * @return The string representation of the integer.
*/
static void	convert_integer(long num, char *str, int i)
{
	while (i-- > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
	}
}

/**
 * @brief Converts an integer to a string.
 * @param n The integer to be converted.
 * @return The string representation of the integer.
*/
char	*ft_itoa(int n)
{
	int		negative;
	int		digits;
	char	*str;
	int		i;
	long	num;

	num = (long)n;
	negative = 0;
	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	digits = count_digits(n);
	i = digits + negative;
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	convert_integer(num, str, i);
	if (negative)
		str[0] = '-';
	return (str);
}
