/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:15:30 by akuburas          #+#    #+#             */
/*   Updated: 2023/10/30 10:42:13 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substrings(const char *str, char c)
{
	int	count;
	int	in_substring;

	count = 0;
	in_substring = 0;
	while (*str)
	{
		if (*str != c && in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		else if (*str == c)
			in_substring = 0;
		str++;
	}

	return (count);
}

static char	*substring_create(const char *str, int start, int finish)
{
	char	*substr;
	int		i;

	i = 0;
	substr = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	while (start < finish)
		substr[i++] = str[start++];
	substr[i] = '\0';
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**result;

	result = (char **)malloc((count_substrings(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (s[i])
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || !s[i]) && index >= 0)
		{
			result[j++] = substring_create(s, index, i);
			index = -1;
		}
		i++;
	}
	result[j] = (NULL);
	return (result);
}
