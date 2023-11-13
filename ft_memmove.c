/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:54:26 by susajid           #+#    #+#             */
/*   Updated: 2023/11/09 10:37:58 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

// replace backwards when src before destination
// eg. ft_memove(dest + 3, dest, 4);
// memory address + 3 = 4th character,
// therefore len - 1 as addition to memory address when replacing backwards
// by default, replace in forward direction
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	int		direction;

	if (!dst && !src)
		return (NULL);
	i = 0;
	direction = 1;
	if (src < dst)
	{
		i = len - 1;
		direction = -1;
	}
	while (len)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i += direction;
		len--;
	}
	return (dst);
}

// int compare(char *a1, char *a2)
// {
// 	for (size_t i = 0; i < 10; i++)
// 	{
// 		// printf("%d\t\t%d\n", a1[i], a2[i]);
// 		if (a1[i] != a2[i])
// 			return (0);
// 	}
// 	return (1);
// }

// int main(void)
// {
// 	char *result;

// 	// Test 1: Overlapping memory regions (src before dest)
// 	char dest1[10] = "Hello";
// 	ft_memmove(dest1 + 1, dest1, 4);

// 	char ex_dest1[10] = "Hello";
// 	memmove(ex_dest1 + 1, ex_dest1, 4);

// 	result = (compare(dest1, ex_dest1) ? "Pass" : "Fail");
// 	printf("Test 1: %s (Input: %s, Expected: %s)\n",
// 		   result, dest1, ex_dest1);

// 	// Test 2: Non-overlapping memory regions
// 	char dest2[10] = "Hello";
// 	const char src2[] = "World";
// 	ft_memmove(dest2, src2, 5);

// 	char ex_dest2[10] = "Hello";
// 	const char ex_src2[] = "World";
// 	memmove(ex_dest2, ex_src2, 5);

// 	result = (compare(dest2, ex_dest2) ? "Pass" : "Fail");
// 	printf("Test 2: %s (Input: %s, Expected: %s)\n",
// 		   result, dest2, ex_dest2);

//     // Test 3: Overlapping memory regions (dest before src)
//     char dest3[10] = "Hello";
//     ft_memmove(dest3, dest3 + 1, 4);

//     char ex_dest3[10] = "Hello";
//     memmove(ex_dest3, ex_dest3 + 1, 4);

//     result = (compare(dest3, ex_dest3) ? "Pass" : "Fail");
//     printf("Test 3: %s (Input: %s, Expected: %s)\n",
// 		result, dest3, ex_dest3);

// 	// Test 4: Overlapping memory regions with different starting positions
//     char dest4[10] = "Hello";
//     ft_memmove(dest4 + 2, dest4 + 1, 3);

//     char ex_dest4[10] = "Hello";
//     memmove(ex_dest4 + 2, ex_dest4 + 1, 3);

//     result = (compare(dest4, ex_dest4) ? "Pass" : "Fail");
//     printf("Test 4: %s (Input: %s, Expected: %s)\n",
// 		result, dest4, ex_dest4);

// 	// Test 5: Copy from an empty source to a destination
//     char dest5[10] = "Hello";
//     const char src5[] = "";
//     ft_memmove(dest5, src5, 0); // Should have no effect

//     char ex_dest5[10] = "Hello";
//     const char ex_src5[] = "";
//     memmove(ex_dest5, ex_src5, 0);

//     result = (compare(dest5, ex_dest5) ? "Pass" : "Fail");
//     printf("Test 5: %s (Input: %s, Expected: %s)\n",
// 		result, dest5, ex_dest5);

// 	// Test 6: Large memory block copy
//     char dest6[21] = "This is a long string";
//     ft_memmove(dest6 + 3, dest6, 16); // Overlapping copy

//     char ex_dest6[21] = "This is a long string";
//     memmove(ex_dest6 + 3, ex_dest6, 16);

//     result = (compare(dest6, ex_dest6) ? "Pass" : "Fail");
//     printf("Test 5: %s (Input: %s, Expected: %s)\n",
// 		result, dest6, ex_dest6);

//     // Test 7: NULL dst, NULL src and non-zero size
//     printf("Test 7: (Input: %s, Expected: %s)\n",
// 		(char *)ft_memmove(((void *)0), ((void *)0), 3),
//         (char *)memmove(((void *)0), ((void *)0), 3));

// 	return (0);
// }
