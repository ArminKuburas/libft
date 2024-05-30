/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_hash.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:22:55 by akuburas          #+#    #+#             */
/*   Updated: 2024/05/30 13:27:48 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_collision(t_hash *hash_table, char *key, unsigned long hash,
	int table_size)
{
	int	i;
	int	old_index;

	hash = create_hash((unsigned char *)key);
	old_index = hash % table_size;
	if (old_index == table_size - 1)
		i = 0;
	else
		i = old_index + 1;
	while (hash_table[i].key)
	{
		i++;
		if (i == table_size && (old_index == 0 || old_index == table_size - 1))
			return (1);
		else if (i == table_size && old_index != table_size - 1)
			i = 0;
		if (i == old_index)
			return (1);
	}
	hash_table[i].key = key;
	hash_table[i].value = hash;
	return (0);
}

int	insert_hash(t_hash *hash_table, char *key, int table_size)
{
	unsigned long	hash;
	int				index;

	hash = create_hash((unsigned char *)key);
	index = hash % table_size;
	if (hash_table[index].key)
	{
		if (handle_collision(hash_table, key, hash, table_size) == 1)
			return (1);
	}
	hash_table[index].key = key;
	hash_table[index].value = hash;
	return (0);
}
