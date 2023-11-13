/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:22:58 by susajid           #+#    #+#             */
/*   Updated: 2023/11/07 10:06:02 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
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
//     // Test 1: Create empty list and add node with integer content at the end
//     t_list *list1 = NULL;
//     int content1 = 42;
//     t_list *node1 = ft_lstnew(&content1);
//     ft_lstadd_back(&list1, node1);
//     printf("Test 1: Added a node with integer content at the end: ");
//     print_list(list1);

//     // Test 2: Add a node with string content at the end of an existing list
//     const char *content2 = "Hello";
//     t_list *node2 = ft_lstnew((void *)content2);
//     list1 = node1;
//     ft_lstadd_back(&list1, node2);
//     printf("\nTest 2: Added a node with string content at the end: ");
//     print_list(list1);

//     // Test 3: Create an empty list and add multiple nodes at the end
//     t_list *list3 = NULL;
//     const char *content3[] = {"Alice", "Bob", "Charlie"};
//     for (int i = 0; i < 3; i++) {
//         t_list *node = ft_lstnew((void *)content3[i]);
//         ft_lstadd_back(&list3, node);
//     }
//     printf("\nTest 3: Added many nodes with string content at the end: ");
//     print_list(list3);

//     // Test 4: Add a node with content as NULL at the end of an existing list
//     t_list *list4 = NULL;
//     t_list *node4 = ft_lstnew(NULL);
//     list4 = node1;
//     ft_lstadd_back(&list4, node4);
//     printf("\nTest 4: Added a node with NULL content at the end: ");
//     print_list(list4);

//     // Test 5: Add a node to NULL list
//     t_list *node5 = ft_lstnew(NULL);
//     ft_lstadd_back(NULL, node5);
//     printf("\nTest 5: Not added a node to NULL list: ");
//     print_list(NULL);

//     // Test 6: Add NULL to an existing list
//     t_list *list6 = NULL;
//     list6 = node1;
//     ft_lstadd_back(&list6, NULL);
//     printf("\nTest 6: Not added NULL to an existing list: ");
//     print_list(list6);

//     return (0);
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
