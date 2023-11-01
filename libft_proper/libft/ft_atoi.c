/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:03:34 by akuburas          #+#    #+#             */
/*   Updated: 2023/11/01 16:08:38 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	long	temp;

	result = 0;
	sign = 1;
	temp = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		temp = result;
		result = result * 10 + (*str - '0');
		if (sign == 1 && temp > result)
			return (-1);
		else if (sign == -1 && temp < result)
			return (0);
		str++;
	}
	return (result * sign);
}
