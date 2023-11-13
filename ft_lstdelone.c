/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:08:36 by susajid           #+#    #+#             */
/*   Updated: 2023/11/07 12:19:11 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
		del(lst->content);
	free(lst);
}

// // Function to delete content (free memory)
// void del(void *content)
// {
//     free(content);
//     printf("deleted content\n");
// }

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
//     // Test 1: Delete the first node (lstsize = 1)
//     t_list *list1 = ft_lstnew((void *)malloc(sizeof(int)));
//     int *int_content1 = (int *)(list1->content);
//     *int_content1 = 42;
//     printf("Test 1: Deleted the first node in a list of size 1\n");
//     print_list(list1);
//     ft_lstdelone(list1, &del);
//     print_list(list1);

//     // Test 2: Delete the second node (lstsize = 3)
//     t_list *list2 = NULL;
//     for (int i = 1; i <= 3; i++) {
//         int *int_content = (int *)(malloc(sizeof(int)));
//         *int_content = i;
//         t_list *node = ft_lstnew((void *)int_content);
//         if (list2 == NULL)
//             list2 = node;
// 		else
// 		{
//             t_list *current = list2;
//             while (current->next != NULL)
//                 current = current->next;
//             current->next = node;
//         }
//     }
//     printf("\nTest 2: Deleted the second node in a list of size 3\n");
//     print_list(list2);
//     printf("%p\n" ,list2->next);
//     ft_lstdelone(list2->next, &del);
//     printf("%p\n" ,list2->next);
//     print_list(list2);

//     // Test 3: Delete the first node (lstsize = 3)
//     t_list *list3 = NULL;
//     const char *strings[] = {"Apple", "Banana", "Cherry"};
//     for (int i = 0; i < 3; i++) {
//         char *str_content = strdup(strings[i]);
//         t_list *node = ft_lstnew((void *)str_content);
//         if (list3 == NULL)
//             list3 = node;
// 		else
// 		{
//             t_list *current = list3;
//             while (current->next != NULL)
// 				current = current->next;
//             current->next = node;
//         }
//     }
//     printf("\nTest 3: Deleted the first node in a list of size 3\n");
//     print_list(list3);
//     printf("%p\n" ,list3);
//     ft_lstdelone(list3, &del);
//     printf("%p\n" ,list3);
//     print_list(list3);

//     // Test 4: Delete a NULL node
//     printf("Test 4: Did not delete a NULL node\n");
//     print_list(NULL);
//     ft_lstdelone(NULL, &del);
//     print_list(NULL);

//     // Test 5: Delete a node with a NULL function
//     t_list *list5 = ft_lstnew((void *)malloc(sizeof(int)));
//     int *int_content5 = (int *)(list5->content);
//     *int_content5 = 42;
//     printf("Test 5: Did not delete a node with a NULL function\n");
//     print_list(list5);
//     ft_lstdelone(list5, NULL);
//     print_list(list5);

//     // Test 6: Delete a node with NULL content
// 	t_list *list6 = ft_lstnew(NULL);
//     printf("Test 6: Did not delete a node with NULL content\n");
//     print_list(list6);
//     ft_lstdelone(list6, &del);
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
