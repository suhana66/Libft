/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:54:26 by susajid           #+#    #+#             */
/*   Updated: 2023/10/30 15:11:25 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main(void) {
// 	char test_cases[] = {' ', 'A', 'a', '5', '\n', '\t', 127, 128};
// 	int length = sizeof(test_cases) / sizeof(test_cases[0]);
//     for (int i = 0; i < length; i++) {
//         int input = test_cases[i];
//         int expected = isprint(input);
//         int result = ft_isprint(input);
// 		char *final = (expected == result) ? "Passed" : "Failed";
// 		printf("Input: %c, ", input);
// 		printf("ft_isprint: %d, ", result);
// 		printf("isprint: %d, ", expected);
// 		printf("Result: %s\n", final);
//     }
// 	return (0);
// }