/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:15:17 by susajid           #+#    #+#             */
/*   Updated: 2023/10/30 16:33:55 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*initial;

	initial = s;
	while (*s)
		s++;
	return (s - initial);
}

// int main(void) {
// 	char *test_cases[] = {
// 		"",
// 		"Hello, World!",
// 		"12345",
// 		"This is a test",
// 		"   ",
// 		"Test\nwith\nnewlines"
// 	};
//     int length = sizeof(test_cases) / sizeof(test_cases[0]);
//     for (int i = 0; i < length; i++) {
//         char *input = test_cases[i];
//         int expected = strlen(input);
//         int result = ft_strlen(input);
// 		char *final = (expected == result) ? "Passed" : "Failed";
// 		printf("Input: %s, ", input);
// 		printf("ft_strlen: %d, ", result);
// 		printf("strlen: %d, ", expected);
// 		printf("Result: %s\n", final);
//     }
// 	return (0);
// }
