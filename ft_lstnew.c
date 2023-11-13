/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:25:51 by susajid           #+#    #+#             */
/*   Updated: 2023/11/06 16:43:30 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = malloc(sizeof(t_list));
	if (!result)
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}

// int main(void)
// {
//     // Test 1: Create a new node with integer content
//     int content1 = 42;
//     t_list *node1 = ft_lstnew(&content1);
//     printf("Test 1: New node created with integer content: %d\n",
// 		*(int *)(node1->content));
//     printf("Next pointer is %p (Expected: NULL)\n", (void *)node1->next);
//     free(node1);

//     // Test 2: Create a new node with string content
//     const char *content2 = "Hello, World!";
//     t_list *node2 = ft_lstnew((void *)content2);
//     printf("\nTest 2: New node created with string content: \"%s\"\n",
// 		(char *)(node2->content));
//     printf("Next pointer is %p (Expected: NULL)\n", (void *)node2->next);
//     free(node2);

//     // Test 3: Create a new node with a custom struct as content
//     struct Person {
//         char name[20];
//         int age;
//     };
//     struct Person person = {"Alice", 30};
//     t_list *node3 = ft_lstnew(&person);
//     printf("\nTest 3: New node created with struct content: %s, %d\n",
// 		((struct Person *)(node3->content))->name,
// 		((struct Person *)(node3->content))->age
// 	);
//     printf("Next pointer is %p (Expected: NULL)\n", (void *)node3->next);
//     free(node3);

//     // Test 4: Create a new node with content as NULL (should still work)
//     t_list *node4 = ft_lstnew(NULL);
//     printf("\nTest 4: New node created with NULL content\n");
//     printf("Content is %p (Expected: NULL)\n",
// 		(void *)(node4->content));
//     printf("Next pointer is %p (Expected: NULL)\n", (void *)node4->next);
//     free(node4);

//     return (0);
// }
