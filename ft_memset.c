/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:38:02 by susajid           #+#    #+#             */
/*   Updated: 2023/10/31 11:45:55 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*result;

	result = b;
	while (len)
	{
		*(unsigned char *)b = c;
		b++;
		len--;
	}
	return (result);
}

// int compare(char a1[10], char a2[10]) {
//     for (int i = 0; i < 10; i++) {
//         if (a1[i] != a2[i])
//             return (0);
//     }
//     return (1);
// }

// int main(void) {
//     char *result;
//     char test1[10] = "Hello";
// 	char expected1[10] = "Hello";
//     ft_memset(test1, 'a', 3);  // Replace the first 3 characters with 'a'
//     memset(expected1, 'a', 3);
//     result = compare(test1, expected1) ? "Pass" : "Fail";
//     printf("Test 1: %s (Result: %s, Expected: %s)\n",
//         result, test1, expected1);

//     char test2[10] = "Hello";
// 	char expected2[10] = "Hello";
//     ft_memset(test2 + 2, 'b', 4);  // Replace from the 3rd character with 'b'
// 	memset(expected2 + 2, 'b', 4);
//     result = compare(test2, expected2) ? "Pass" : "Fail";
//     printf("Test 2: %s (Result: %s, Expected: %s)\n",
//         result, test2, expected2);

//     char test3[10] = "Hello";
// 	char expected3[10] = "Hello";
//     ft_memset(test3 + 2, 0, 2);  // Replace from the 3rd char with null bytes
//     memset(expected3 + 2, 0, 2);
//     result = compare(test3, expected3) ? "Pass" : "Fail";
//     printf("Test 3: %s (Result: %s, Expected: %s)\n",
//         result, test3, expected3);

//     char test4[10] = "Hello";
// 	char expected4[10] = "Hello";
//     ft_memset(test4 + 1, 'X', 0);  // Should have no effect
//     memset(expected4 + 1, 'X', (0));
//     result = compare(test4, expected4) ? "Pass" : "Fail";
//     printf("Test 4: %s (Result: %s, Expected: %s)\n",
//         result, test4, expected4);

//     char test5[10];
// 	char expected5[10];
//     ft_memset(test5, 'Y', 9);  // Fill the entire array with 'Y'
//     memset(expected5, 'Y', 9);
//     result = compare(test5, expected5) ? "Pass" : "Fail";
//     printf("Test 5: %s (Result: %s, Expected: %s)\n",
//         result, test5, expected5);

//     char test6[10];
//     char expected6[10];
//     ft_memset(test6, 0xAA, 5);  // Fill with hexadecimals
//     memset(expected6, 0xAA, 5);
//     result = compare(test6, expected6) ? "Pass" : "Fail";
//     printf("Test 6: %s (Result: %s, Expected: %s)\n",
//         result, test6, expected6);
//     return (0);
// }