/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:22:19 by susajid           #+#    #+#             */
/*   Updated: 2023/10/30 14:52:38 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int main(void) {
// 	int test_cases[] = {-1, 0, 32, 65, 127, 128, 255, 256};
// 	int length = sizeof(test_cases) / sizeof(test_cases[0]);
// 	for (int i = 0; i < length; i++) {
// 		int input = test_cases[i];
// 		int expected = isascii(input);
// 		int result = ft_isascii(input);
// 		char *final = (expected == result) ? "Passed" : "Failed";
// 		printf("Input: %c, ", input);
// 		printf("ft_isascii: %d, ", result);
// 		printf("isascii: %d, ", expected);
// 		printf("Result: %s\n", final);
//     }
// 	return (0);
// }
