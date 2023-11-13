/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:10:36 by susajid           #+#    #+#             */
/*   Updated: 2023/11/08 10:13:16 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		n--;
	}
	return (NULL);
}

// void    test(size_t testno, const char str[], int target, size_t n)
// {
//     void *result = ft_memchr(str, target, n);
//     void *exresult = memchr(str, target, n);
// 	char *testresult = (result == exresult) ? "Pass" : "Fail";
//     printf("Test %zu: %s\n", testno, testresult);
// }

// int main(void) {
//     test(1, "Hello, World!", 'o', 20);
//     test(2, "Hello, World!", 'z', 14);
//     test(3, "Hello, World!", '\0', 14);
//     test(4, "Hello, World!", 'H', 14);
//     test(5, "Hello, World!", '!', 5);
//     test(6, "Hello, World!", 'l', 6);

//     return (0);
// }
