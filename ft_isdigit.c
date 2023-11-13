/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:29:10 by susajid           #+#    #+#             */
/*   Updated: 2023/10/30 12:44:16 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main(void) {
// 	char test_cases[] = {'0', '9', '5', 'A', 'a', ' ', '\n', '\t', 0};
// 	int length = sizeof(test_cases) / sizeof(test_cases[0]);
//     for (int i = 0; i < length; i++) {
//         int input = test_cases[i];
//         int expected = isdigit(input);
//         int result = ft_isdigit(input);
// 		char *final = (expected == result) ? "Passed" : "Failed";
// 		printf("Input: %c, ", input);
// 		printf("ft_isdigit: %d, ", result);
// 		printf("isdigit: %d, ", expected);
// 		printf("Result: %s\n", final);
//     }
// 	return (0);
// }