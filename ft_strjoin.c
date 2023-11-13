/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:05:54 by susajid           #+#    #+#             */
/*   Updated: 2023/11/03 09:39:21 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s1[i++])
		len++;
	i = 0;
	while (s2[i++])
		len++;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (*s1)
		result[i++] = *s1++;
	while (*s2)
		result[i++] = *s2++;
	result[len] = 0;
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strjoin("hello", "world"));
// }
