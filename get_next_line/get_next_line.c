/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelonja <bvelonja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:10:51 by bvelonja          #+#    #+#             */
/*   Updated: 2025/05/26 18:26:12 by bvelonja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(char *cache)
{
	char	*line;
	int		i;

	i = 0;
	if (!cache[i])
		return (NULL);
	while (cache[i] && cache[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (cache[i] && cache[i] != '\n')
	{
		line[i] = cache[i];
		i++;
	}
	if (cache[i] == '\n')
	{
		line[i] = cache[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*clean_cache(char *cache)
{
	char	*new_cache;
	int		i;
	int		j;

	i = 0;
	while (cache[i] && cache[i] != '\n')
		i++;
	if (!cache[i])
	{
		free(cache);
		return (NULL);
	}
	new_cache = malloc(sizeof(char) * (ft_strlen(cache) - i + 1));
	if (!new_cache)
	{
		free(cache);
		return (NULL);
	}
	i++;
	j = 0;
	while (cache[i])
		new_cache[j++] = cache[i++];
	new_cache[j] = '\0';
	free(cache);
	return (new_cache);
}

static char	*read_file(int fd, char *cache)
{
	char	*buffer;
	int		bytes_read;
	char	*temp;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while ((!cache || !ft_strchr(cache, '\n')) && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(cache, buffer);
		free(cache);
		cache = temp;
	}
	free(buffer);
	return (cache);
}

char	*get_next_line(int fd)
{
	static char	*cache;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	cache = read_file(fd, cache);
	if (!cache)
		return (NULL);
	line = get_line(cache);
	cache = clean_cache(cache);
	return (line);
}
