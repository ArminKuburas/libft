/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:32:31 by akuburas          #+#    #+#             */
/*   Updated: 2023/10/25 09:59:09 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return ((char *)last);
}
