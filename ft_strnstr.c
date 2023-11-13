/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:52:55 by susajid           #+#    #+#             */
/*   Updated: 2023/11/09 09:13:22 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

static char	*if_found(char needleend, char *result)
{
	if (needleend == 0)
		return (result);
	return (NULL);
}

static char	*find_needle(const char *haystack, const char *needle, size_t len)
{
	char	*result;
	size_t	needlei;
	size_t	i;

	result = NULL;
	needlei = 0;
	i = 0;
	while (i < len && haystack[i] && needle[needlei])
	{
		if (needle[needlei] != haystack[i] && result != NULL)
		{
			result = NULL;
			i -= needlei - 1;
			needlei = 0;
		}
		if (needle[needlei] == haystack[i])
		{
			if (result == NULL)
				result = (char *)(haystack + i);
			needlei++;
		}
		i++;
	}
	return (if_found(needle[needlei], result));
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	return (find_needle(haystack, needle, len));
}

// void    test(size_t testno, const char str1[], const char str2[], size_t n)
// {
// 	char *result = ft_strnstr(str1, str2, n);
// 	char *exresult = strnstr(str1, str2, n);
// 	char *testresult = (result == exresult) ? "Pass" : "Fail";
// 	printf("Test %zu: %s (%s | %s)\n", testno, testresult, result, exresult);
// }

// int main(void) {
// 	test(1, "Hello, World!", "World", 13);
// 	test(2, "Hello, World!", "Universe", 5);
// 	test(3, "Hello, World!", "o, W", 10);
// 	test(4, "Hello, World!", "Hello, World!", 14);
// 	test(5, "Hello, World!", "", 14);
// 	test(6, "Hello, World!", "o", 13);
// 	test(7, "Hello, World!", "Hello, Universe!", 14);
// 	test(8, "", "Hello, World!", 5);
// 	test(9, "Hello, World!", "", 5);
// 	test(10, "", "", 0);
// 	test(11, "Hello, World!", "", 14);
// 	test(12, "Hello, World!", "", 0);
// 	test(13, NULL, "", 0);
// 	test(14, "lorem ipsum dolor sit amet", "dolor", 15);
// 	test(15, "aaabcabcd", "aabc", -1);
// 	test(16, "aaabcabcd", "abcd", 9);
//     // Test 17: NULL needle causes segmentation fault with standard function
// 	return (0);
// }
