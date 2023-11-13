/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:15:52 by susajid           #+#    #+#             */
/*   Updated: 2023/11/08 15:09:41 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = c % 256;
	while (1)
	{
		if (*s == c)
			return ((char *)(s));
		if (!*s)
			break ;
		s++;
	}
	return (NULL);
}

// void    test(size_t testno, char *str, int target)
// {
//     char *result = ft_strchr(str, target);
//     char *exresult = strchr(str, target);
// 	char *testresult = (result == exresult) ? "Pass" : "Fail";
//     printf("Test %zu: %s %s\n", testno, testresult, exresult);
// }

// int main(void) {
// 	test(1, "Hello, World!", 'o');
//     test(2, "Hello, World!", 'z');
//     test(3, "Hello, World!", 0);
// 	test(3, "Hello, World!", -1);
//     test(4, "Hello, World!", 'H');
//     test(5, "Hello, World!", '!');
//     test(6, "tello", 't' + 256);

//     return (0);
// }
