/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:22:07 by akuburas          #+#    #+#             */
/*   Updated: 2023/10/30 16:29:45 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	convert_integer(long num, char *str, int i)
{
	while (i-- > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
	}
}

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
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	convert_integer(num, str, i);
	if (negative)
		str[0] = '-';
	return (str);
}
