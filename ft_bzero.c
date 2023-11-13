/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:30:22 by susajid           #+#    #+#             */
/*   Updated: 2023/10/31 11:49:34 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n)
	{
		*(unsigned char *)s = 0;
		s++;
		n--;
	}
}

// int compare(char *a1, char *a2) {
//     for (size_t i = 0; i < 10; i++) {
//         printf("%d\t%d\n", a1[i], a2[i]);
//         if (a1[i] != a2[i])
//             return (0);
//     }
//     return (1);
// }

// int main(void) {
//     char *result;
//     char test1[10] = "Hello";
// 	char expected1[10] = "Hello";
//     ft_bzero(test1, 5);  // Zero out the first 5 characters
//     bzero(expected1, 5);
//     result = compare(test1, expected1) ? "Pass" : "Fail";
//     printf("Test 1: %s\n", result);

//     char test2[10] = "Hello";
// 	char expected2[10] = "Hello";
//     ft_bzero(test2, 0);  // Should have no effect
// 	bzero(expected2, (0));
//     result = compare(test2, expected2) ? "Pass" : "Fail";
//     printf("Test 2: %s\n", result);

//     char test3[10] = "Hello";
// 	char expected3[10] = "Hello";
//     ft_bzero(test3 + 1, 4);  // Zero out the last 4 characters
//     bzero(expected3 + 1, 4);
//     result = compare(test3 + 1, expected3 + 1) ? "Pass" : "Fail";
//     printf("Test 3: %s\n", result);

//     char test4[10] = "Hello";
// 	char expected4[10] = "Hello";
//     ft_bzero(test4, 10);  // Zero out the array
//     bzero(expected4, 10);
//     result = compare(test4, expected4) ? "Pass" : "Fail";
//     printf("Test 4: %s\n", result);

//     char test5[10];
// 	char expected5[10];
//     ft_bzero(test5, sizeof(test5));  // Zero out an empty array
//     bzero(expected5, sizeof(expected5));
//     result = compare(test5, expected5) ? "Pass" : "Fail";
//     printf("Test 5: %s\n", result);

//     return (0);
// }