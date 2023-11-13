/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:05:39 by susajid           #+#    #+#             */
/*   Updated: 2023/11/02 15:48:05 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		len;
	int		i;

	len = 0;
	while (s1[len])
		len++;
	len++;
	result = malloc(len * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s1[i];
		i++;
	}
	return (result);
}

// void	test(int testno, const char str[])
// {
// 	char *result = ft_strdup(str);
// 	char *exresult = ft_strdup(str);
// 	char *testresult = (strcmp(result, exresult) == 0 && result != exresult)
// 		? "Pass" : "Fail";
// 	printf("Test %d: %s Original: %s (%p), Duplicated: %s (%p)\n",
// 		testno, testresult, result, result, exresult, exresult);
// 	free(result);
// 	free(exresult);
// }

// int main() {
// 	test(1, "Hello, World!");
// 	test(2, "12345");
// 	test(3, "");
// 	test(4, "Duplicate this string");
// 	test(5, "12345");
// 	test(6, "A");
// 	test(7, "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa");
//     return (0);
// }