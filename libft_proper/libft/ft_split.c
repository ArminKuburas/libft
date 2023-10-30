/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:15:30 by akuburas          #+#    #+#             */
/*   Updated: 2023/10/30 14:12:15 by akuburas         ###   ########.fr       */
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

static void	free_result_array(char **result, int j)
{
	while (j > 0)
	{
		free(result[j--]);
	}
	free(result);
}

static void	split_string(char const *s, char c, char **result, int count)
{
	size_t	i;
	int		j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (j < count)
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || !s[i]) && index >= 0)
		{
			result[j] = substring_create(s, index, i);
			if (!result[j])
			{
				free_result_array(result, j);
				return (NULL);
			}
			index = -1;
			j++;
		}
		i++;
	}
	result[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**result;

	result = (char **)malloc((count_substrings(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	count = count_substrings(s, c);
	split_string(s, c, result, count);
	return (result);
	if (!result[count])
	{
		free(result);
		return (NULL);
	}
	return (result);
}
