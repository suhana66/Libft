/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:52:15 by susajid           #+#    #+#             */
/*   Updated: 2023/11/10 16:49:29 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

// whitespace ('\t', '\n',  '\v',  '\f',  '\r',  ' ')
int	ft_atoi(const char *str)
{
	long long	result;
	int			sign;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (int)((*str - 48) * sign);
		str++;
	}
	if (sign == -1 && result > 0)
		return (0);
	else if (sign == 1 && result < 0)
		return (-1);
	return ((int)result);
}

// int	main(void)
// {
//     char *string = "922337203685477111111111";
// 	printf("%d\n%d\n", ft_atoi(string), atoi(string));
// 	return (0);
// }
