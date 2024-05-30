/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:15:30 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/15 10:53:40 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @file ft_split.c
 * @brief this file contains the ft_split function.
 */

/**
 * @brief Counts the number of substrings in a string.
 * @param str The string to be counted.
 * @param c The delimiter character.
 * @return The number of substrings.
 */
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

/**
 * @brief Creates a substring from a string.
 * @param str The string to be copied.
 * @param start The starting index.
 * @param finish The ending index.
 * @return The new substring.
 */
static char	*substring_create(const char *str, int start, int finish)
{
	char	*substr;
	int		i;

	i = 0;
	substr = ft_calloc(finish - start + 1, sizeof(char));
	if (!substr)
		return (NULL);
	while (start < finish)
		substr[i++] = str[start++];
	substr[i] = '\0';
	return (substr);
}

/**
 * @brief Frees the result array.
 * @param result The result array.
 * @param j The index.
 */
static void	free_result_array(char **result, int j)
{
	while (j >= 0)
	{
		free(result[j]);
		result[j] = NULL;
		j--;
	}
	free(result);
	result = NULL;
}

/**
 * @brief Splits the string into substrings.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @param result The result array.
 * @param count The number of substrings.
 * @return 1 if the split fails, 0 if it succeeds.
 */
static int	split_string(char const *s, char c, char **result, int count)
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
				return (1);
			}
			index = -1;
			j++;
		}
		i++;
	}
	return (0);
}

/**
 * @brief Splits a string into substrings using a delimiter.
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The result array.
 */
char	**ft_split(char const *s, char c)
{
	int		count;
	int		split_check;
	char	**result;

	if (!s)
		return (NULL);
	count = count_substrings(s, c);
	result = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!result)
		return (NULL);
	split_check = split_string(s, c, result, count);
	if (split_check == 1)
	{
		return (NULL);
	}
	else
	{
		result[count] = NULL;
		return (result);
	}
}
