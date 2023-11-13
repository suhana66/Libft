/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:57:21 by susajid           #+#    #+#             */
/*   Updated: 2023/11/07 09:19:43 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
// 	printf("\n");
// }

// int main(void)
// {
// 	// Test 1: Get the last node of an empty list (should return NULL)
// 	t_list *list1 = NULL;
// 	t_list *last1 = ft_lstlast(list1);
// 	printf("Test 1: Last node of empty list: %p (Expected: NULL)\n",
// 		(void *)last1);

// 	// Test 2: Get the last node of a list with one node
// 	const char *content2 = "Hello";
// 	t_list *list2 = ft_lstnew((void *)content2);
// 	t_list *last2 = ft_lstlast(list2);
// 	printf("\nTest 2: Last node of list with one node: %p (Expected: %p)\n",
// 		(void *)last2, (void *)list2);

// 	// Test 3: Get the last node of a list with multiple nodes
// 	t_list *list3 = NULL;
// 	const char *content3[] = {"Alice", "Bob", "Charlie"};
// 	for (int i = 0; i < 3; i++) {
// 		t_list *node = ft_lstnew((void *)content3[i]);
// 		if (list3 == NULL)
// 			list3 = node;
// 		else
// 		{
// 			t_list *current = list3;
// 			while (current->next != NULL)
// 				current = current->next;
// 			current->next = node;
// 		}
// 	}
// 	t_list *last3 = ft_lstlast(list3);
// 	printf("\nTest 3: Last node of list with 3 nodes: %s\n",
// 		last3->content);
// 	print_list(list3);

// 	// Test 4: Get the last node of a list with a NULL content node
// 	t_list *list4 = NULL;
// 	const char *content4[] = {"David", "Eva", NULL};
// 	for (int i = 0; i < 3; i++)
// 	{
// 		t_list *node = ft_lstnew((void *)content4[i]);
// 		if (list4 == NULL)
// 			list4 = node;
// 		else
// 		{
// 			t_list *current = list4;
// 			while (current->next != NULL)
// 				current = current->next;
// 			current->next = node;
// 		}
// 	}
// 	t_list *last4 = ft_lstlast(list4);
// 	printf("\nTest 4: Last node of list with NULL content node: %s\n",
// 		last4->content);
// 	print_list(list4);

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
