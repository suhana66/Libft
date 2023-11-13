/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:24:40 by susajid           #+#    #+#             */
/*   Updated: 2023/10/31 14:33:14 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int main(void) {
// 	char test_cases[] = {'a', 'A', 'z', 'Z', '1', ' ', '\n', '\t', 0, 255};
// 	int length = sizeof(test_cases) / sizeof(test_cases[0]);
//     for (int i = 0; i < length; i++) {
//         int input = test_cases[i];
//         int expected = toupper(input);
//         int result = ft_toupper(input);
// 		char *final = (expected == result) ? "Passed" : "Failed";
// 		printf("Input: %c, ", input);
// 		printf("ft_toupper: %d, ", result);
// 		printf("toupper: %d, ", expected);
// 		printf("Result: %s\n", final);
//     }
// 	return (0);
// }