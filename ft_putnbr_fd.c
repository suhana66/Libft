/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:32:36 by susajid           #+#    #+#             */
/*   Updated: 2023/11/07 15:31:08 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

static int	find_place(int n)
{
	int	result;

	result = 1;
	if (n < 0)
		result = -1;
	n /= 10;
	while (n)
	{
		n /= 10;
		result *= 10;
	}
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		place;
	char	c;

	place = find_place(n);
	if (place < 0)
		write(fd, "-", 1);
	while (place)
	{
		if (place != 1 && place != -1)
			c = n / place % 10 + '0';
		else
			c = n % 10 * place + '0';
		write(fd, &c, 1);
		place /= 10;
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);

// 	return (0);
// }
