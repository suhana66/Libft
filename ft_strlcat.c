/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:11:30 by susajid           #+#    #+#             */
/*   Updated: 2023/11/01 12:13:42 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*srcstart;
	size_t		dstlen;

	srcstart = src;
	dstlen = 0;
	while (dst[dstlen])
		dstlen++;
	dst += dstlen;
	if (dstsize && dstlen < dstsize)
	{
		while (*src && dstsize - dstlen - 1)
		{
			*dst++ = *src++;
			dstsize--;
		}
		*dst = 0;
	}
	else
		dstlen = dstsize;
	while (*src)
		src++;
	return ((size_t)(src - srcstart + dstlen));
}

// int main(void) {
// 	char	*result;

// 	// Test 1
//     char dest1[10] = "Hello";
//     const char src1[] = "World";
//     size_t result1 = ft_strlcat(dest1, src1, 10);

// 	char ex_dest1[10] = "Hello";
//     const char ex_src1[] = "World";
//     size_t ex_result1 = strlcat(ex_dest1, ex_src1, 10);

// 	result = (strcmp(ex_dest1, dest1) == 0 && (ex_result1 == result1))
// 		? "Pass" : "Fail";
//     printf("Test 1: %s (Input: %zu, Expected: %zu)\n",
// 		result, result1, ex_result1);

// 	// Test 2
// 	char dest2[10] = "Hello";
//     const char src2[] = "LongerString";
//     size_t result2 = ft_strlcat(dest2, src2, 10);

// 	char ex_dest2[10] = "Hello";
//     const char ex_src2[] = "LongerString";
//     size_t ex_result2 = strlcat(ex_dest2, ex_src2, 10);

// 	result = (strcmp(ex_dest2, dest2) == 0 && (ex_result2 == result2))
// 		? "Pass" : "Fail";
//     printf("Test 2: %s (Input: %zu, Expected: %zu)\n",
// 		result, result2, ex_result2);

// 	// Test 3
// 	char dest3[10] = "Hello";
//     const char src3[] = "Short";
//     size_t result3 = ft_strlcat(dest3, src3, 10);

// 	char ex_dest3[10] = "Hello";
//     const char ex_src3[] = "Short";
//     size_t ex_result3 = strlcat(ex_dest3, ex_src3, 10);

// 	result = (strcmp(ex_dest3, dest3) == 0 && (ex_result3 == result3))
// 		? "Pass" : "Fail";
//     printf("Test 3: %s (Input: %zu, Expected: %zu)\n",
// 		result, result3, ex_result3);

// 	// Test 4
// 	char dest4[10] = "Hello";
//     const char src4[] = "abcde";
//     size_t result4 = ft_strlcat(dest4, src4, 10);

// 	char ex_dest4[10] = "Hello";
//     const char ex_src4[] = "abcde";
//     size_t ex_result4 = strlcat(ex_dest4, ex_src4, 10);

// 	result = (strcmp(ex_dest4, dest4) == 0 && (ex_result4 == result4))
// 		? "Pass" : "Fail";
//     printf("Test 4: %s (Input: %zu, Expected: %zu)\n",
// 		result, result4, ex_result4);

// 	// Test 5
// 	char dest5[10] = "";
//     const char src5[] = "abcde";
//     size_t result5 = ft_strlcat(dest5, src5, 0);

// 	char ex_dest5[10] = "";
//     const char ex_src5[] = "abcde";
//     size_t ex_result5 = strlcat(ex_dest5, ex_src5, 0);

// 	result = (strcmp(ex_dest5, dest5) == 0 && (ex_result5 == result5))
// 		? "Pass" : "Fail";
//     printf("Test 5: %s (Input: %zu, Expected: %zu)\n",
// 		result, result5, ex_result5);

// 	// Test 6
// 	char dest6[10] = "Hello";
//     const char src6[] = "";
//     size_t result6 = ft_strlcat(dest6, src6, 10);

// 	char ex_dest6[10] = "Hello";
//     const char ex_src6[] = "";
//     size_t ex_result6 = strlcat(ex_dest6, ex_src6, 10);

// 	result = (strcmp(ex_dest6, dest6) == 0 && (ex_result6 == result6))
// 		? "Pass" : "Fail";
//     printf("Test 6: %s (Input: %zu, Expected: %zu)\n",
// 		result, result6, ex_result6);

// 	// Test 7
// 	char dest7[10] = "Hello";
//     const char src7[] = "abcdefghi";
//     size_t result7 = ft_strlcat(dest7, src7, 10);

// 	char ex_dest7[10] = "Hello";
//     const char ex_src7[] = "abcdefghi";
//     size_t ex_result7 = strlcat(ex_dest7, ex_src7, 10);

// 	result = (strcmp(ex_dest7, dest7) == 0 && (ex_result7 == result7))
// 		? "Pass" : "Fail";
//     printf("Test 7: %s (Input: %zu, Expected: %zu)\n",
// 		result, result7, ex_result7);

//     // Test 8
//     char dest8[10] = "Hello";
//     const char src8[] = "World";
//     size_t result8 = ft_strlcat(dest8, src8, 4);

// 	char ex_dest8[10] = "Hello";
//     const char ex_src8[] = "World";
//     size_t ex_result8 = strlcat(ex_dest8, ex_src8, 4);

// 	result = (strcmp(ex_dest8, dest8) == 0 && (ex_result8 == result8))
// 		? "Pass" : "Fail";
//     printf("Test 8: %s (Input: %zu, Expected: %zu)\n",
// 		result, result8, ex_result8);

//     // Test 9
//     char dest9[10] = "Hello";
//     const char src9[] = "World";
//     size_t result9 = ft_strlcat(dest9, src9, 5);

// 	char ex_dest9[10] = "Hello";
//     const char ex_src9[] = "World";
//     size_t ex_result9 = strlcat(ex_dest9, ex_src9, 5);

// 	result = (strcmp(ex_dest9, dest9) == 0 && (ex_result9 == result9))
// 		? "Pass" : "Fail";
//     printf("Test 9: %s (Input: %zu, Expected: %zu)\n",
// 		result, result9, ex_result9);

//     return (0);
// }
