/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:39:57 by susajid           #+#    #+#             */
/*   Updated: 2023/11/01 11:08:02 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*srcstart;

	srcstart = src;
	if (dstsize)
	{
		while (*src && dstsize - 1)
		{
			*dst++ = *src++;
			dstsize--;
		}
		*dst = 0;
	}
	while (*src)
		src++;
	return ((size_t)(src - srcstart));
}

// int main(void) {
// 	char	*result;

// 	// Test 1
//     char dest1[10] = "Hello";
//     const char src1[] = "World";
//     size_t result1 = ft_strlcpy(dest1, src1, 6);

// 	char ex_dest1[10] = "Hello";
//     const char ex_src1[] = "World";
//     size_t ex_result1 = strlcpy(ex_dest1, ex_src1, 6);

// 	result = (strcmp(ex_dest1, dest1) == 0 && (ex_result1 == result1))
// 		? "Pass" : "Fail";
//     printf("Test 1: %s (Input: %s, Expected: %s, Length: %zu)\n",
// 		result, dest1, ex_dest1, result1);

// 	// Test 2
// 	char dest2[10] = "Hello";
//     const char src2[] = "LongerString";
//     size_t result2 = ft_strlcpy(dest2, src2, 6);

// 	char ex_dest2[10] = "Hello";
//     const char ex_src2[] = "LongerString";
//     size_t ex_result2 = strlcpy(ex_dest2, ex_src2, 6);

// 	result = (strcmp(ex_dest2, dest2) == 0 && (ex_result2 == result2))
// 		? "Pass" : "Fail";
//     printf("Test 2: %s (Input: %s, Expected: %s, Length: %zu)\n",
// 		result, dest2, ex_dest2, result2);

// 	// Test 3
// 	char dest3[10] = "Hello";
//     const char src3[] = "Short";
//     size_t result3 = ft_strlcpy(dest3, src3, 10);

// 	char ex_dest3[10] = "Hello";
//     const char ex_src3[] = "Short";
//     size_t ex_result3 = strlcpy(ex_dest3, ex_src3, 10);

// 	result = (strcmp(ex_dest3, dest3) == 0 && (ex_result3 == result3))
// 		? "Pass" : "Fail";
//     printf("Test 3: %s (Input: %s, Expected: %s, Length: %zu)\n",
// 		result, dest3, ex_dest3, result3);

// 	// Test 4
// 	char dest4[10] = "Hello";
//     const char src4[] = "abcde";
//     size_t result4 = ft_strlcpy(dest4, src4, 3);

// 	char ex_dest4[10] = "Hello";
//     const char ex_src4[] = "abcde";
//     size_t ex_result4 = strlcpy(ex_dest4, ex_src4, 3);

// 	result = (strcmp(ex_dest4, dest4) == 0 && (ex_result4 == result4))
// 		? "Pass" : "Fail";
//     printf("Test 4: %s (Input: %s, Expected: %s, Length: %zu)\n",
// 		result, dest4, ex_dest4, result4);

// 	// Test 5
// 	char dest5[10] = "";
//     const char src5[] = "abcde";
//     size_t result5 = ft_strlcpy(dest5, src5, 0);

// 	char ex_dest5[10] = "";
//     const char ex_src5[] = "abcde";
//     size_t ex_result5 = strlcpy(ex_dest5, ex_src5, 0);

// 	result = (strcmp(ex_dest5, dest5) == 0 && (ex_result5 == result5))
// 		? "Pass" : "Fail";
//     printf("Test 5: %s (Input: %s, Expected: %s, Length: %zu)\n",
// 		result, dest5, ex_dest5, result5);

// 	// Test 6
// 	char dest6[10] = "Hello";
//     const char src6[] = "";
//     size_t result6 = ft_strlcpy(dest6, src6, 6);

// 	char ex_dest6[10] = "Hello";
//     const char ex_src6[] = "";
//     size_t ex_result6 = strlcpy(ex_dest6, ex_src6, 6);

// 	result = (strcmp(ex_dest6, dest6) == 0 && (ex_result6 == result6))
// 		? "Pass" : "Fail";
//     printf("Test 6: %s (Input: %s, Expected: %s, Length: %zu)\n",
// 		result, dest6, ex_dest6, result6);

// 	// Test 7
// 	char dest7[10] = "Hello";
//     const char src7[] = "abcdefghi";
//     size_t result7 = ft_strlcpy(dest7, src7, 10);

// 	char ex_dest7[10] = "Hello";
//     const char ex_src7[] = "abcdefghi";
//     size_t ex_result7 = strlcpy(ex_dest7, ex_src7, 10);

// 	result = (strcmp(ex_dest7, dest7) == 0 && (ex_result7 == result7))
// 		? "Pass" : "Fail";
//     printf("Test 7: %s (Input: %s, Expected: %s, Length: %zu)\n",
// 		result, dest7, ex_dest7, result7);

//     return (0);
// }
