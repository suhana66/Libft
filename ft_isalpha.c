/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:15:33 by susajid           #+#    #+#             */
/*   Updated: 2023/10/30 12:35:30 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int main(void) {
// 	char test_cases[] = {'A', 'a', 'Z', 'z', 'B', '5', ' ', '\n', '\t', 0};
// 	int length = sizeof(test_cases) / sizeof(test_cases[0]);
//     for (int i = 0; i < length; i++) {
//         int input = test_cases[i];
//         int expected = isalpha(input);
//         int result = ft_isalpha(input);
// 		char *final = (expected == result) ? "Passed" : "Failed";
// 		printf("Input: %c, ", input);
// 		printf("ft_isalpha: %d, ", result);
// 		printf("isalpha: %d, ", expected);
// 		printf("Result: %s\n", final);
//     }
// 	return (0);
// }
