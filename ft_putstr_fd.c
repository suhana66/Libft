/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:31:12 by susajid           #+#    #+#             */
/*   Updated: 2023/11/13 09:52:36 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s || fd < 0)
		return ;
	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
}

// int main(void)
// {
//     // Test 1: Output "Hello, World!" to standard output (file descriptor 1)
//     printf("Test 1: Output \"Hello, World!\" to standard output\n");
// 	printf("\"");
// 	fflush(stdout);
//     ft_putstr_fd("Hello, World!", 1);
// 	printf("\"\n");

//     // Test 2: Output an empty string to standard output
//     printf("Test 2: Output an empty string to standard output\n");
// 	printf("\"");
// 	fflush(stdout);
//     ft_putstr_fd("", 1);
// 	printf("\"\n");

//     // Test 3: Output a newline character '\n' to standard output
//     printf("Test 3: Output '\\n' to standard output\n");
// 	printf("\"");
// 	fflush(stdout);
//     ft_putstr_fd("\n", 1);
// 	printf("\"\n");

//     // Test 4: Output a tab character '\t' to standard output
//     printf("Test 4: Output '\\t' to standard output\n");
// 	printf("\"");
// 	fflush(stdout);
//     ft_putstr_fd("\t", 1);
// 	printf("\"\n");

//     // Test 5: Output the null character '\0' to standard output
//     printf("Test 5: Output '\\0' to standard output\n");
// 	printf("\"");
// 	fflush(stdout);
//     ft_putstr_fd("\0", 1);
// 	printf("\"\n");

// 	// Test 6: Output NULL to standard output (Nothing is outputed)
//     printf("Test 6: Output NULL to standard output\n");
//     ft_putstr_fd(NULL, 1);

//     return (0);
// }
