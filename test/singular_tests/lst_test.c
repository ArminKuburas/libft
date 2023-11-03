/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:08:23 by akuburas          #+#    #+#             */
/*   Updated: 2023/11/03 10:34:47 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//making a new list boy
/*
int main(void)
{
	char *str = "Hello, world!";	
	t_list *new_node = ft_lstnew(str);
	if (new_node)
	{
		printf("New Node Content: %s\n", (char *)(new_node->content));
		free(new_node);
	}
	return (0);
}
*/
/*
//lst back test
int main(void)
{
	t_list *list = NULL;
	char *str1 = "Hello";
	char *str2 = "World";

	t_list *new_node1 = ft_lstnew(str1);
	t_list *new_node2 = ft_lstnew(str2);

	ft_lstadd_back(&list, new_node1);
	ft_lstadd_back(&list, new_node2);

	t_list *current = list;
	while (current != NULL)
	{
		printf("Node Content: %s\n", (char *)(current->content));
		current = current->next;
	}

	ft_lstclear(&list, free);

	return (0);
}
*/
/*
//list front test thing
int main(void)
{
	t_list *list = NULL;
	char *str1 = "Hello";
	char *str2 = "World";

	t_list *new_node1 = ft_lstnew(str1);
	t_list *new_node2 = ft_lstnew(str2);

	ft_lstadd_front(&list, new_node1);
	ft_lstadd_front(&list, new_node2);

	t_list *current = list;
	while (current != NULL)
	{
		printf("Node Content: %s\n", (char *)(current->content));
		current = current->next;
	}
	ft_lstclear(&list, free);

	return (0);
}
*/
void	del_content(void *content)
{
	free(content);
}

/*
//lstclear function.
int	main(void)
{
	t_list *list = NULL;
	char *str1 = ft_strdup("Hello");
	char *str2 = ft_strdup("World");
	t_list *new_node1 = ft_lstnew(str1);
	t_list *new_node2 = ft_lstnew(str2);
	ft_lstadd_back(&list, new_node1);
	ft_lstadd_back(&list, new_node2);
	printf("Before ft_lstclear:\n");
	t_list *current = list;
	while (current != NULL)
	{
		printf("Node Content: %s\n", (char *)(current->content));
		current = current->next;
	}

	ft_lstclear(&list, del_content);

	printf("After ft_lstclear:\n");
	current = list;
	while (current != NULL)
	{
		printf("Node Content: %s\n", (char *)(current->content));
		current = current->next;
	}

	return (0);
}
*/
/*
//delone test
int	main(void)
{
	char *str = ft_strdup("Hello");
	t_list *new_node = ft_lstnew(str);

	printf("Before ft_lstdelone:\n");
	printf("Node Content: %s\n", (char *)(new_node->content));

	ft_lstdelone(new_node, del_content);

	printf("After ft_lstdelone:\n");
	printf("Node Content: %s\n", (char *)(new_node->content));

	return (0);
}
*/
void	*duplicate_content(void *content)
{
	return (ft_strdup((char *)content));
}

/*
//lstmap test
int main(void)
{
	t_list *list = NULL;
	char *str1 = "Hello";
	char *str2 = "World";

	t_list *new_node1 = ft_lstnew(str1);
	t_list *new_node2 = ft_lstnew(str2);

	ft_lstadd_back(&list, new_node1);
	ft_lstadd_back(&list, new_node2);

	printf("Original List:\n");
	t_list *current = list;
	while (current != NULL)
    {
		printf("Node Content: %s\n", (char *)(current->content));
		current = current->next;
    }

	t_list *new_list = ft_lstmap(list, duplicate_content, del_content);

	printf("Mapped List:\n");
	current = new_list;
	while (current != NULL)
    {
		printf("Node Content: %s\n", (char *)(current->content));
		current = current->next;
    }

	ft_lstclear(&list, del_content);
	ft_lstclear(&new_list, del_content);

	return (0);
}
*/