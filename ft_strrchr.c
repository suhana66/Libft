/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:55:15 by susajid           #+#    #+#             */
/*   Updated: 2023/11/08 15:20:10 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	c = c % 256;
	result = NULL;
	while (1)
	{
		if (*s == c)
			result = ((char *)(s));
		if (!*s)
			break ;
		s++;
	}
	return (result);
}

// void    test(size_t testno, char *str, int target)
// {
//     char *result = ft_strrchr(str, target);
//     char *exresult = strrchr(str, target);
// 	char *testresult = (result == exresult) ? "Pass" : "Fail";
//     printf("Test %zu: %s\n", testno, testresult);
// }

// int main(void)
// {
// 	test(1, "Hello, World!", 'o');
//     test(2, "Hello, World!", 'z');
//     test(3, "Hello, World!", 0);
// 	test(3, "Hello, World!", -1);
//     test(4, "Hello, World!", 'H');
//     test(5, "Hello, World!", '!');
//     test(6, "tello", 't' + 256);

//     return (0);
// }
