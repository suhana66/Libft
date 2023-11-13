/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:39:40 by susajid           #+#    #+#             */
/*   Updated: 2023/11/06 10:19:33 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void uppercase_even_indices(unsigned int index, char *c)
// {
//     if (index % 2 == 0) {
//         if (*c >= 'a' && *c <= 'z') {
//             *c = *c - 'a' + 'A';
//         }
//     }
// }

// int main(void)
// {
//     char s1[] = "abcdefg";
//     printf("Test 1: Original: \"%s\"\n", s1);
//     ft_striteri(s1, uppercase_even_indices);
//     printf("Modified: \"%s\" (Expected: \"AbCdEfG\")\n", s1);

//     char s2[] = "Hello, World!";
//     printf("\nTest 2: Original: \"%s\"\n", s2);
//     ft_striteri(s2, uppercase_even_indices);
//     printf("Modified: \"%s\" (Expected: \"HeLlO, WOrLd!\")\n", s2);

//     char s3[] = "12345";
//     printf("\nTest 3: Original: \"%s\"\n", s3);
//     ft_striteri(s3, uppercase_even_indices);
//     printf("Modified: \"%s\" (Expected: \"12345\")\n", s3);

//     char s4[] = "xyz";
//     printf("\nTest 4: Original: \"%s\"\n", s4);
//     ft_striteri(s4, uppercase_even_indices);
//     printf("Modified: \"%s\" (Expected: \"XyZ\")\n", s4);

//     char s5[] = "";
//     printf("\nTest 5: Original: \"%s\"\n", s5);
//     ft_striteri(s5, uppercase_even_indices);
//     printf("Modified: \"%s\" (Expected: \"\")\n", s5);

//     // Test when s is NULL (NULL is expected)
//     char *s6 = NULL;
//     printf("\nTest 6: Original: NULL\n");
//     ft_striteri(s6, uppercase_even_indices);
// 	printf("Modified: %s (Expected: NULL)\n", s6);

// 	// Test when f is NULL (no modification is expected)
//     char s7[] = "Hello, World!";
//     printf("\nTest 7: Original: \"%s\"\n", s7);
//     ft_striteri(s7, NULL);
// 	printf("Modified: \"%s\" (Expected: \"Hello, World!\")\n", s7);

//     return (0);
// }
