/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 23:43:17 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/30 13:03:12 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline char	*ft_line_allocator(int fd, char *line_storage)
{
	char	*buffer;
	int		read_bytes;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free(line_storage), NULL);
	read_bytes = 1;
	while (!gnl_strchr(line_storage, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			free(line_storage);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		line_storage = gnl_strjoin(line_storage, buffer);
		if (!line_storage)
			break ;
	}
	free(buffer);
	return (line_storage);
}

char	*ft_give_line(char *line_storage)
{
	char	*line;
	int		i;

	i = 0;
	if (!line_storage[i])
		return (NULL);
	while (line_storage[i])
		if (line_storage[i++] == '\n')
			break ;
	line = (char *)malloc((i + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (line_storage[i] && line_storage[i] != '\n')
	{
		line[i] = line_storage[i];
		i++;
	}
	if (line_storage[i] == '\n')
	{
		line[i] = line_storage[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*ft_remove_line(char *ln_strg)
{
	char	*new_storage;
	int		i;
	int		j;

	i = 0;
	while (ln_strg[i] && ln_strg[i] != '\n')
		i++;
	if (!ln_strg[i])
	{
		free(ln_strg);
		return (NULL);
	}
	new_storage = (char *)malloc((gnl_strlen(ln_strg) - i++) * sizeof(char));
	if (!new_storage)
	{
		free(ln_strg);
		ln_strg = NULL;
		return (NULL);
	}
	j = 0;
	while (ln_strg[i])
		new_storage[j++] = ln_strg[i++];
	new_storage[j] = '\0';
	free(ln_strg);
	return (new_storage);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*line_storage;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line_storage = ft_line_allocator(fd, line_storage);
	if (!line_storage)
		return (NULL);
	line = ft_give_line(line_storage);
	if (!line)
	{
		free(line_storage);
		line_storage = NULL;
		return (NULL);
	}
	line_storage = ft_remove_line(line_storage);
	return (line);
}
