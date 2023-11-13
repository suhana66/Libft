/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:21:54 by susajid           #+#    #+#             */
/*   Updated: 2023/11/13 09:41:28 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// int main(void)
// {
//     // Test 1: Output character 'A' to standard output (file descriptor 1)
//     printf("Test 1: Output 'A' to standard output\n");
//     printf("\"");
//     fflush(stdout);
//     ft_putchar_fd('A', 1);
//     printf("\"\n");

//     // Test 2: Output character 'B' to standard output
//     printf("Test 2: Output 'B' to standard output\n");
//     printf("\"");
//     fflush(stdout);
//     ft_putchar_fd('B', 1);
//     printf("\"\n");

//     // Test 3: Output a newline character '\n' to standard output
//     printf("Test 3: Output '\\n' to standard output\n");
//     printf("\"");
//     fflush(stdout);
//     ft_putchar_fd('\n', 1);
//     printf("\"\n");

//     // Test 4: Output a tab character '\t' to standard output
//     printf("Test 4: Output '\\t' to standard output\n");
//     printf("\"");
//     fflush(stdout);
//     ft_putchar_fd('\t', 1);
//     printf("\"\n");

//     // Test 5: Output the null character '\0' to standard output
//     printf("Test 5: Output '\\0' to standard output\n");
//     printf("\"");
//     fflush(stdout);
//     ft_putchar_fd('\0', 1);
//     printf("\"\n");

//     // Test 6: Output a non-printable character (ASCII 1) to standard output
//     printf("Test 6: Output '\\x01' to standard output\n");
//     printf("\"");
//     fflush(stdout);
//     ft_putchar_fd('\x01', 1);
//     printf("\"\n");

//     return (0);
// }
