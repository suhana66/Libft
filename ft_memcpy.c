/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:52:33 by susajid           #+#    #+#             */
/*   Updated: 2023/11/09 10:30:44 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*result;

	if (!dst && !src)
		return (NULL);
	result = dst;
	while (n)
	{
		*(unsigned char *)dst = *(unsigned char *)src;
		dst++;
		src++;
		n--;
	}
	return (result);
}

// int compare(char *a1, char *a2) {
//     for (size_t i = 0; i < 10; i++) {
//         // printf("%d\t\t%d\n", a1[i], a2[i]);
//         if (a1[i] != a2[i])
//             return (0);
//     }
//     return (1);
// }

// int main(void) {
//     char *result;

//     // Test 1: Copy characters from one string to another
//     char dest1[10] = "Hello";
//     const char src1[] = "World";
//     ft_memcpy(dest1, src1, 5);

//     char ex_dest1[10] = "Hello";
//     const char ex_src1[] = "World";
//     memcpy(ex_dest1, ex_src1, 5);

//     result = (compare(dest1, ex_dest1) ? "Pass" : "Fail");
//     printf("Test 1: %s\n", result);

//     // Test 2: Copy from a mixed-type array to a string
//     char dest2[10] = "Hello";
//     const int src2[] = {1, 2, 3, 4, 5};
//     ft_memcpy(dest2, src2, 3);

// 	char ex_dest2[10] = "Hello";
//     const int ex_src2[] = {1, 2, 3, 4, 5};
//     memcpy(ex_dest2, ex_src2, 3);

//     result = (compare(dest2, ex_dest2) ? "Pass" : "Fail");
//     printf("Test 2: %s\n", result);

//     // Test 3: Copy from one string to an empty destination
//     char dest3[10];
//     const char src3[] = "Hello";
//     ft_memcpy(dest3, src3, 5);

// 	char ex_dest3[10];
//     const char ex_src3[] = "Hello";
//     memcpy(ex_dest3, ex_src3, 5);

//     result = (compare(dest3, ex_dest3) ? "Pass" : "Fail");
//     printf("Test 3: %s\n", result);

// 	// Test 4: Copy from 0 characters to destination
//     char dest4[10] = "Hello";
//     const char src4[] = "";
//     ft_memcpy(dest4, src4, 0);

// 	char ex_dest4[10] = "Hello";
//     const char ex_src4[] = "";
//     memcpy(ex_dest4, ex_src4, 0);

//     result = (compare(dest4, ex_dest4) ? "Pass" : "Fail");
//     printf("Test 4: %s\n", result);

// 	// Test 5: Copy 0 characters from NULL source
//     char dest5[10] = "Hello";
//     ft_memcpy(dest5, NULL, 0);

// 	char ex_dest5[10] = "Hello";
//     memcpy(ex_dest5, NULL, 0);

// 	result = (compare(dest5, ex_dest5) ? "Pass" : "Fail");
//     printf("Test 5: %s\n", result);

//     // Test 6: NULL dst, NULL src and non-zero size
//     printf("Test 6: (%s | %s)\n",
// 		(char *)ft_memcpy(((void *)0), ((void *)0), 3),
//         (char *)memcpy(((void *)0), ((void *)0), 3));

//     return (0);
// }