/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:09:37 by susajid           #+#    #+#             */
/*   Updated: 2023/11/13 09:50:52 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

// int main(void)
// {
//     // Test 1: Output "Hello, World!" to standard output (file descriptor 1)
//     printf("Test 1: Output \"Hello, World!\" to standard output\n");
//     ft_putendl_fd("Hello, World!", 1);

//     // Test 2: Output an empty string to standard output
//     printf("Test 2: Output an empty string to standard output\n");
//     ft_putendl_fd("", 1);

//     // Test 3: Output a newline character '\n' to standard output
//     printf("Test 3: Output '\\n' to standard output\n");
//     ft_putendl_fd("\n", 1);

//     // Test 4: Output a tab character '\t' to standard output
//     printf("Test 4: Output '\\t' to standard output\n");
//     ft_putendl_fd("\t", 1);

//     // Test 5: Output the null character '\0' to standard output
//     printf("Test 5: Output '\\0' to standard output\n");
//     ft_putendl_fd("\0", 1);

// 	// Test 6: Output NULL to standard output (Nothing is outputed)
//     printf("Test 6: Output NULL to standard output\n");
//     ft_putendl_fd(NULL, 1);

//     return (0);
// }
