/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:15:16 by susajid           #+#    #+#             */
/*   Updated: 2023/11/08 17:26:49 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (start > ft_strlen(s))
		len = 0;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[len] = 0;
	return (result);
}

// void	test(const char *s, unsigned int start, size_t len)
// {
// 	char *res = ft_substr(s, start, len);
// 	printf("%s\t%s\n", s, res);
// 	free(res);
// }

// int	main(void)
// {
// 	test("Hello, World!", 7, 5);
//     test("Hello, World!", 400, 20);
//     test("Hello, World!", 0, 100);
//     test("Hello, World!", 13, 1);
// }
