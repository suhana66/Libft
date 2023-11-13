/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:43:16 by susajid           #+#    #+#             */
/*   Updated: 2023/11/02 15:08:13 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	void	*temp;

	size *= count;
	result = malloc(size);
	if (!result)
		return (NULL);
	temp = result;
	while (size--)
		*(unsigned char *)temp++ = 0;
	return (result);
}

// int main(void)
// {
// 	size_t nmemb1 = 0; // Zero elements
//     size_t size1 = 10;
//     void *result1 = ft_calloc(nmemb1, size1);
// 	void *exresult1 = calloc(nmemb1, size1);
//     printf("\nTest 1: nmemb: %zu, size: %zu, Result: %lu (Expected: %lu)\n",
//         nmemb1, size1, sizeof(result1), sizeof(exresult1));

//     size_t nmemb2 = 10;
//     size_t size2 = 0; // Zero size
//     void *result2 = ft_calloc(nmemb2, size2);
// 	void *exresult2 = calloc(nmemb2, size2);
//     printf("Test 2: nmemb: %zu, size: %zu, Result: %lu (Expected: %lu)\n",
//         nmemb2, size2, sizeof(result2), sizeof(exresult2));
// }
