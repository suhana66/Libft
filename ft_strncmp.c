/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:26:37 by susajid           #+#    #+#             */
/*   Updated: 2023/11/09 10:53:17 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && *s1 == *s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (!n)
		return (0);
	return ((int)((unsigned char)*s1 - (unsigned char)*s2));
}

// void    test(size_t testno, const char *str1, const char *str2, size_t n)
// {
//     int result = ft_strncmp(str1, str2, n);
//     int exresult = strncmp(str1, str2, n);
// 	char *testresult = (result == exresult) ? "Pass" : "Fail";
//     printf("Test %zu: %s (%d | %d)\n", testno, testresult, exresult, result);
// }

// int main(void) {
//     test(1, "Hello, World!", "Hello, World!", 13);
//     test(2, "Hello", "Hello, World!", 5);
//     test(3, "Apple", "Banana", 10);
//     test(4, "World", "Hello, World!", 3);
//     test(5, "Hello", "Hellp", 5);
//     test(6, "Hello, World!", "Hello, Moon!", 13);
//     test(7, "Hello, World!", "Hello, World!", 14);
//     test(8, "", "Hello, World!", 5);
//     test(9, "Hello, World!", "", 5);
//     test(10, "", "", 0);
//     test(11, "Hello, World!", "", 0);
//     test(12, "atoms\0\0\0\0", "atoms\0abc", 8);
//     test(13, "atomss\0\0\0\0", "atoms\0abc", 8);
//     return (0);
// }