/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:05:15 by susajid           #+#    #+#             */
/*   Updated: 2023/11/06 10:15:31 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		len;
	int		i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}

// char uppercase_even_indices(unsigned int index, char c)
// {
//     if (index % 2 == 0) {
//         if (c >= 'a' && c <= 'z') {
//             c = c - 'a' + 'A';
//         }
//     }
//     return (c);
// }

// int main(void)
// {
//     const char s1[] = "Hello, World!";
//     char *result1 = ft_strmapi(s1, uppercase_even_indices);
//     printf("Test 1: Original: \"%s\"\n", s1);
//     printf("Modified: \"%s\" (Expected: \"HeLlO, WOrld!\")\n", result1);
//     free(result1);

//     const char s2[] = "12345";
//     char *result2 = ft_strmapi(s2, uppercase_even_indices);
//     printf("\nTest 2: Original: \"%s\"\n", s2);
//     printf("Modified: \"%s\" (Expected: \"12345\")\n", result2);
//     free(result2);

//     const char s3[] = "abcdefg";
//     char *result3 = ft_strmapi(s3, uppercase_even_indices);
//     printf("\nTest 3: Original: \"%s\"\n", s3);
//     printf("Modified: \"%s\" (Expected: \"AbCdEfG\")\n", result3);
//     free(result3);

//     const char s4[] = "xyz";
//     char *result4 = ft_strmapi(s4, uppercase_even_indices);
//     printf("\nTest 4: Original: \"%s\"\n", s4);
//     printf("Modified: \"%s\" (Expected: \"XyZ\")\n", result4);
//     free(result4);

//     const char s5[] = "";
//     char *result5 = ft_strmapi(s5, uppercase_even_indices);
//     printf("\nTest 5: Original: \"%s\"\n", s5);
//     printf("Modified: \"%s\" (Expected: \"\")\n", result5);
//     free(result5);

//     // Test when s is NULL (NULL is expected)
//     const char *s6 = NULL;
//     char *result6 = ft_strmapi(s6, uppercase_even_indices);
//     printf("\nTest 6: Original: NULL\n");
//     printf("Modified: %s (Expected: NULL)\n", result6);

//     // Test when f is NULL (NULL is expected)
//     const char *s7 = "hello world";
//     char *result7 = ft_strmapi(s7, NULL);
//     printf("\nTest 7: Original: \"%s\"\n", s7);
//     printf("Modified: %s (Expected: NULL)\n", result7);

//     return (0);
// }
