/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:18:45 by susajid           #+#    #+#             */
/*   Updated: 2023/11/09 12:45:27 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && str1[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return ((int)(str1[i] - str2[i]));
}

// void test(size_t testno, const char str1[], const char str2[], size_t n)
// {
//     int result = ft_memcmp(str1, str2, n);
//     int exresult = memcmp(str1, str2, n);
//     char *testresult = (result == exresult) ? "Pass" : "Fail";
//     printf("Test %zu: %s (%d | %d)\n", testno, testresult, exresult, result);
// }

// int main(void)
// {
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
//     test(12, "teste", "teste", 6);
//     return (0);
// }
