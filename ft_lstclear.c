/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:48:48 by susajid           #+#    #+#             */
/*   Updated: 2023/11/07 12:32:58 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_delete;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		to_delete = *lst;
		*lst = to_delete->next;
		del(to_delete->content);
		free(to_delete);
	}
	*lst = NULL;
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
//     // Test 1: Delete the 1st node (lstsize = 1)
//     t_list *list1 = ft_lstnew((void *)malloc(sizeof(int)));
//     int *int_content1 = (int *)(list1->content);
//     *int_content1 = 42;
//     printf("Test 1: Deleted the 1st node in a list of size 1\n");
//     print_list(list1);
//     ft_lstclear(&list1, &del);
//     print_list(list1);

//     // Test 2: Delete the  list from the 2nd node (lstsize = 3)
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
//     printf("\nTest 2: Deleted the list from 2nd node in list of size 3\n");
//     print_list(list2);
//     ft_lstclear(&(list2->next), &del);
//     print_list(list2);

//     // Test 3: Delete the entire list (lstsize = 3)
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
//     printf("\nTest 3: Deleted the entire list of size 3\n");
//     print_list(list3);

//     ft_lstclear(&list3, &del);
//     print_list(list3);

//     // Test 4: Delete a NULL list
//     printf("Test 4: Did not delete a NULL list\n");
//     print_list(NULL);
//     ft_lstclear(NULL, &del);
//     print_list(NULL);

//     // Test 5: Delete a list with a NULL function
//     t_list *list5 = ft_lstnew((void *)malloc(sizeof(int)));
//     int *int_content5 = (int *)(list5->content);
//     *int_content5 = 42;
//     printf("Test 5: Did not delete a list with a NULL function\n");
//     print_list(list5);
//     ft_lstclear(&list5, NULL);
//     print_list(list5);

//     // Test 6: Delete a list with NULL content (lstsize = 1)
// 	t_list *list6 = ft_lstnew(NULL);
//     printf("Test 1: Did not delete a node with NULL content\n");
//     print_list(list6);
//     ft_lstclear(&list6, &del);
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
