/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:16:29 by susajid           #+#    #+#             */
/*   Updated: 2023/11/06 17:32:28 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	result;

	result = 0;
	while (lst != NULL)
	{
		result++;
		lst = lst->next;
	}
	return (result);
}

// int main(void)
// {
//     // Test 1: Count nodes in an empty list (should return 0)
//     t_list *list1 = NULL;
//     int size1 = ft_lstsize(list1);
//     printf("Test 1: Count nodes in an empty list: %d (Expected: 0)\n",
// 		size1);

//     // Test 2: Count list with one node
//     const char *content2 = "Hello";
//     t_list *list2 = ft_lstnew((void *)content2);
//     int size2 = ft_lstsize(list2);
//     printf("\nTest 2: Count list with one node: %d (Expected: 1)\n",
// 		size2);

//     // Test 3: Count list with multiple nodes
//     t_list *list3 = NULL;
//     const char *content3[] = {"Alice", "Bob", "Charlie"};
//     for (int i = 0; i < 3; i++)
// 	{
//         t_list *node = ft_lstnew((void *)content3[i]);
//         if (!list3)
//         	list3 = node;
//         else
// 		{
//             t_list *current = list3;
//             while (current->next != NULL)
//                 current = current->next;
//             current->next = node;
//         }
//     }
//     int size3 = ft_lstsize(list3);
//     printf("\nTest 3: Count list with three nodes: %d (Expected: 3)\n",
// 		size3);

//     // Test 4: Count list with NULL content node
//     t_list *list4 = NULL;
//     list4 = ft_lstnew(NULL);
//     int size4 = ft_lstsize(list4);
//     printf("\nTest 4: Count list with NULL content node: %d (Expected: 1)\n",
// 		size4);

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
