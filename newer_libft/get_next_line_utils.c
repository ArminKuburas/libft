/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:16:57 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/30 13:03:21 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*gnl_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
	{
		return (&s[gnl_strlen(s)]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

size_t	gnl_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*result;

	if (!s2)
		return (NULL);
	result = (char *)malloc((gnl_strlen(s1) + gnl_strlen(s2) + 1)
			* sizeof(char));
	if (!result)
	{
		free(s1);
		s1 = NULL;
		return (NULL);
	}
	i = -1;
	j = 0;
	if (s1 || (++i))
		while (s1[++i] != '\0')
			result[i] = s1[i];
	while (s2[j] != '\0')
		result[i++] = s2[j++];
	result[gnl_strlen(s1) + gnl_strlen(s2)] = '\0';
	free(s1);
	return (result);
}
