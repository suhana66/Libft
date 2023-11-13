/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:46:49 by susajid           #+#    #+#             */
/*   Updated: 2023/11/06 17:23:06 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

// // Helper function to print the content of a linked list
// void print_list(const t_list *lst)
// {
// 	const t_list *current = lst;
// 	while (current != NULL) {
// 		if (!current->content)
// 			printf("NULL ");
// 		else
// 			printf("%d ", *(char *)(current->content));
// 		current = current->next;
// 	}
// 	printf("NULL\n");
// }

// int main(void)
// {
// 	// Test 1: Add a node with integer content at the front
// 	t_list *list1 = NULL;
// 	int content1 = 42;
// 	t_list *node1 = ft_lstnew(&content1);
// 	ft_lstadd_front(&list1, node1);
// 	printf("Test 1: Added a node with integer content at the front: ");
// 	print_list(list1);

// 	// Test 2: Add a node with string content at the front of an existing list
// 	const char *content2 = "Hello";
// 	t_list *node2 = ft_lstnew((void *)content2);
// 	ft_lstadd_front(&list1, node2);
// 	printf("\nTest 2: Added a node with string content at the front: ");
// 	print_list(list1);

// 	// Test 3: Create an empty list and add multiple nodes at the front
// 	t_list *list3 = NULL;
// 	const char *content3[] = {"Alice", "Bob", "Charlie"};
// 	for (int i = 2; i >= 0; i--) {
// 		t_list *node = ft_lstnew((void *)content3[i]);
// 		ft_lstadd_front(&list3, node);
// 	}
// 	printf("\nTest 3: Added multiple nodes with string content at the front: ");
// 	print_list(list3);

// 	// Test 4: Add a node with content as NULL at the front of an existing list
// 	t_list *list4 = NULL;
// 	t_list *node4 = ft_lstnew(NULL);
// 	ft_lstadd_front(&list4, node4);
// 	printf("\nTest 4: Added a node with NULL content at the front: ");
// 	print_list(list4);

// 	// Test 5: Add a node when list is NULL
// 	t_list **list5 = NULL;
// 	t_list *node5 = ft_lstnew(NULL);
// 	ft_lstadd_front(list5, node5);
// 	printf("\nTest 5: Not added a node when list is NULL\n");

// 	return (0);
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*result;

// 	result = malloc(sizeof(t_list));
// 	if (!result)
// 		return (NULL);
// 	result->content = content;
// 	result->next = NULL;
// 	return (result);
// }
