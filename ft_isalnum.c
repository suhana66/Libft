/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:45:12 by susajid           #+#    #+#             */
/*   Updated: 2023/10/30 12:55:44 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalnum(int c)
{
	int	ifdigit;
	int	ifalpha;

	ifdigit = (c >= '0' && c <= '9');
	ifalpha = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
	return (ifdigit || ifalpha);
}

// int main(void) {
// 	char test_cases[] = {'0', '9', '5', 'A', 'a', ' ', '*', '\n', '\t', 0};
// 	int length = sizeof(test_cases) / sizeof(test_cases[0]);
//     for (int i = 0; i < length; i++) {
//         int input = test_cases[i];
//         int expected = isalnum(input);
//         int result = ft_isalnum(input);
// 		char *final = (expected == result) ? "Passed" : "Failed";
// 		printf("Input: %c, ", input);
// 		printf("ft_isalnum: %d, ", result);
// 		printf("isalnum: %d, ", expected);
// 		printf("Result: %s\n", final);
//     }
// 	return (0);
// }