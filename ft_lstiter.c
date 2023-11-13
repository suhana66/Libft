/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:35:06 by susajid           #+#    #+#             */
/*   Updated: 2023/11/07 13:03:25 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// // Example function
// void print(void *content)
// {
// 	if (content)
// 		printf("%d", *(int *)content);
// 	else
// 		printf("%s", content);
// 	printf("# ");
// }

// int main(void)
// {
// 	// Test 1: Apply a function to many nodes with int content
// 	t_list *list1 = NULL;
// 	for (int i = 1; i <= 3; i++)
// 	{
// 		int *int_content = (int *)(malloc(sizeof(int)));
// 		*int_content = i;
// 		t_list *node = ft_lstnew((void *)int_content);
// 		ft_lstadd_back(&list1, node);
// 	}
// 	printf("Test 1: Apply a function to many nodes with int content: ");
// 	ft_lstiter(list1, &print);
// 	printf("\n");

// 	// Test 2: Apply a function to many nodes with string content
// 	t_list *list2 = NULL;
// 	const char *strings[] = {"Apple", "Banana", "Cherry"};
// 	for (int i = 0; i < 3; i++)
// 	{
// 		char *str_content = strdup(strings[i]);
// 		t_list *node = ft_lstnew((void *)str_content);
// 		ft_lstadd_back(&list2, node);
// 	}
// 	printf("\nTest 2: Apply a function to many nodes with string content: ");
// 	ft_lstiter(list2, &print);
// 	printf("\n");

// 	// Test 3: Apply a function to an empty list
// 	t_list *list3 = NULL;
// 	printf("\nTest 3: Apply a function to an empty list: ");
// 	ft_lstiter(list3, &print);
// 	printf("\n");

// 	// Test 4: Apply a function to a node with NULL content
// 	t_list *list4 = ft_lstnew(NULL);
// 	printf("\nTest 4: Apply a function to a node with NULL content: ");
// 	ft_lstiter(list4, &print);
// 	printf("\n");

// 	// Test 5: Apply a NULL function to list
// 	int num = 42;
//     t_list *list5 = ft_lstnew(&num);
//     printf("\nTest 5: Apply a NULL function to list: ");
//     ft_lstiter(list5, NULL);
// 	printf("\n");

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
