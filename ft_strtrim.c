/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:41:41 by susajid           #+#    #+#             */
/*   Updated: 2023/11/08 12:36:09 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

static int	chrinstr(char const *set, char target)
{
	while (*set)
		if (*set++ == target)
			return (1);
	return (0);
}

// array index + 1 = length
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		start;
	int		len;
	int		i;

	i = 0;
	while (s1[i] && chrinstr(set, s1[i]))
		i++;
	start = i;
	len = 0;
	if (s1[i])
	{
		i = ft_strlen(s1) - 1;
		while (s1[i] && chrinstr(set, s1[i]))
			i--;
		len = i - start + 1;
	}
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
		result[i++] = s1[start++];
	result[len] = 0;
	return (result);
}

// int	main(void)
// {
// 	char *res = ft_strtrim("          ", " ");
// 	for (size_t i = 0; res[i]; i++)
// 		printf("%d\n", res[i]);
// }
