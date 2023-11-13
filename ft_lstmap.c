/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:31 by susajid           #+#    #+#             */
/*   Updated: 2023/11/07 15:21:18 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*current;
	t_list	**next;

	if (!lst || !f || !del)
		return (NULL);
	start = ft_lstnew(f(lst->content));
	if (!start)
		return (NULL);
	next = &(start->next);
	while (1)
	{
		lst = lst->next;
		if (!lst)
			break ;
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		*next = current;
		next = &(current->next);
	}
	return (start);
}

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

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*to_delete;

// 	if (!lst || !del)
// 		return ;
// 	while (*lst)
// 	{
// 		to_delete = *lst;
// 		*lst = to_delete->next;
// 		del(to_delete->content);
// 		free(to_delete);
// 	}
// 	*lst = NULL;
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

// // Function to double the integer content
// void *double_int_content(void *content)
// {
// 	if (!content)
// 		return (NULL);
//     int *original = (int *)content;
//     int *doubled = (int *)(malloc(sizeof(int)));
//     *doubled = (*original) * 2;
//     return (void *)doubled;
// }

// // Function to duplicate the string content
// void *duplicate_str_content(void *content)
// {
// 	if (!content)
// 		return (NULL);
//     char *original = (char *)content;
//     char *duplicate = strdup(original);
//     return (void *)duplicate;
// }

// int main(void)
// {
//     // Test 1: Apply a function to multiple int content nodes
//     t_list *list1 = NULL;
//     for (int i = 1; i <= 3; i++)
// 	{
//         int *int_content = (int *)(malloc(sizeof(int)));
//         *int_content = i;
//         t_list *node = ft_lstnew((void *)int_content);
//         ft_lstadd_back(&list1, node);
//     }
//     printf("Test 1: Apply a function to multiple int content nodes\n");
//     t_list *doubled_list1 = ft_lstmap(list1, &double_int_content, &free);
//     printf("%p ", list1);
// 	print_list(list1);
// 	printf("%p ", doubled_list1);
//     print_list(doubled_list1);
//     printf("\n");

//     // Test 2: Apply a function to multiple string content nodes
//     t_list *list2 = NULL;
//     const char *strings[] = {"Apple", "Banana", "Cherry"};
//     for (int i = 0; i < 3; i++)
// 	{
//         char *str_content = strdup(strings[i]);
//         t_list *node = ft_lstnew((void *)str_content);
//         ft_lstadd_back(&list2, node);
//     }
//     printf("Test 2: Apply a function to multiple string content nodes\n");
//     t_list *dupli_list2 = ft_lstmap(list2, &duplicate_str_content, &free);
//     printf("%p ", list2);
// 	print_list(list2);
// 	printf("%p ", dupli_list2);
//     print_list(dupli_list2);
//     printf("\n");

//     // Test 3: Apply a function to an empty list
//     t_list *list3 = NULL;
//     printf("Test 3: Apply a function to an empty list\n");
//     t_list *result_list3 = ft_lstmap(list3, &double_int_content, &free);
//     printf("%p ", list3);
// 	print_list(list3);
// 	printf("%p ", result_list3);
//     print_list(result_list3);
//     printf("\n");

// 	// Test 4: Apply a function to a list with NULL content
// 	t_list *list4 = ft_lstnew(NULL);
// 	printf("Test 4: Apply a function to a list with NULL content\n");
// 	t_list *result_list4 = ft_lstmap(list4, &double_int_content, &free);
// 	printf("%p ", list4);
// 	print_list(list4);
// 	printf("%p ", result_list4);
//     print_list(result_list4);
//     printf("\n");

// 	// Test 5: Apply a NULL function to list
//     t_list *list5 = ft_lstnew((void *)malloc(sizeof(int)));
//     int *int_content5 = (int *)(list5->content);
//     *int_content5 = 42;
// 	printf("Test 5: Apply a NULL function to list\n");
// 	t_list *result_list5 = ft_lstmap(list5, NULL, &free);
// 	printf("%p ", list5);
// 	print_list(list5);
// 	printf("%p ", result_list5);
//     print_list(result_list5);
//     printf("\n");

//     return (0);
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*current;

// 	if (!lst || !new)
// 		return ;
// 	if (!*lst)
// 	{
// 		*lst = new;
// 		return ;
// 	}
// 	current = *lst;
// 	while (current->next != NULL)
// 		current = current->next;
// 	current->next = new;
// }
