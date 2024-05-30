/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:19:11 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/14 05:29:15 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_printf.c
 * @brief custom Printf function.
*/

/**
 * @brief Prints the different formats.
 * @param args The arguments.
 * @param format The format.
 * @return Returns the length of the printed format.
*/
static int	my_formats(va_list *args, const char format)
{
	int	length;

	length = 0;
	if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(*args, int), &length));
	else if (format == 'c')
		return (ft_putchar(va_arg(*args, int)));
	else if (format == 's')
		return (ft_putstr(va_arg(*args, char *)));
	else if (format == 'p')
	{
		if (ft_putstr("0x") == -1
			|| ft_ptrhex((unsigned long)va_arg(*args, void *), &length) == -1)
			return (-1);
		return (2 + length);
	}
	else if (format == 'x')
		return (ft_puthex(va_arg(*args, unsigned int), 0, &length));
	else if (format == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), 1, &length));
	else if (format == 'u')
		return (ft_put_u_nbr(va_arg(*args, unsigned int), &length));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

/**
 * @brief Checks if the format is valid.
 * @param str The string to be checked.
 * @param args The arguments.
 * @param print_length The length of the printed string.
 * @param i The index of the string.
 * @return Returns 0 if successful, -1 if not.
*/
static int	check(const char *str, va_list *args, int *print_length, int *i)
{
	int	result;

	result = 0;
	if (str[(*i)] == '%')
	{
		result = my_formats(args, str[(*i) + 1]);
		if (result == -1)
			return (-1);
		(*print_length) += result;
		if (str[(*i + 1)] == '\0')
			(*i)++;
		else
			(*i) += 2;
	}
	else
	{
		result = ft_putchar(str[*i]);
		if (result == -1)
			return (-1);
		(*print_length) += result;
		(*i)++;
	}
	return (0);
}

/**
 * @brief Custom printf function.
 * @param str The string to be printed.
 * @param ... The variadric arguments.
 * @return Returns the length of the printed string.
*/
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		print_length;
	int		i;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (check(str, &args, &print_length, &i) == -1)
		{
			va_end(args);
			return (-1);
		}
	}
	va_end(args);
	return (print_length);
}
