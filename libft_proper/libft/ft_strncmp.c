/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:38:31 by akuburas          #+#    #+#             */
/*   Updated: 2023/10/27 11:38:57 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	u1;
	unsigned char	u2;

	while (n > 0)
	{
		u1 = (unsigned char)*s1;
		u2 = (unsigned char)*s2;
		if (u1 != u2)
			return (u1 - u2);
		if (u1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
