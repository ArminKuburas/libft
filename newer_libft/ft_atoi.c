/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:03:34 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/13 21:32:38 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_atoi.c
 * @brief this file contains the ft_atoi function.
*/

/**
 * @brief Parses the digits from the string.
 * @param str The string to be parsed.
 * @param sign The sign of the number.
 * @return Returns the parsed number.
*/
static long	parse_digits(const char *str, int sign)
{
	long	result;
	long	temp;

	result = 0;
	temp = 0;
	while (*str >= '0' && *str <= '9')
	{
		temp = result;
		result = result * 10 + (*str - '0');
		if (sign == 1 && temp > result)
			return (-1);
		else if (sign == -1 && temp > result)
			return (0);
		str++;
	}
	return (result);
}

/**
 * @brief Converts the initial portion of the string pointed to by str to int.
 * @param str The string to be converted.
 * @return Returns the converted int value.
*/
int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = parse_digits(str, sign);
	return ((int)(result * sign));
}
