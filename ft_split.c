/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susajid <susajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:00:00 by susajid           #+#    #+#             */
/*   Updated: 2023/11/09 14:38:39 by susajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

static int	strcount(char const *s, char c)
{
	int	result;
	int	flag;

	result = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			flag = 0;
		else if (!flag)
		{
			flag = 1;
			result++;
		}
		s++;
	}
	return (result);
}

static int	chrcount(char const *s, char c)
{
	int	result;

	result = 0;
	while (*s && *s != c)
	{
		result++;
		s++;
	}
	return (result);
}

static int	strsplit(const char *s, char c, char **arr, int size)
{
	int		strlen;
	int		arrindex;
	int		arrsindex;

	arrindex = 0;
	while (arrindex < size)
	{
		while (*s && *s == c)
			s++;
		strlen = chrcount(s, c);
		arr[arrindex] = malloc((strlen + 1) * sizeof(char));
		if (!arr[arrindex])
		{
			while (arrindex != -1)
				free(arr[arrindex--]);
			free(arr);
			return (0);
		}
		arrsindex = 0;
		while (arrsindex < strlen)
			arr[arrindex][arrsindex++] = *s++;
		arr[arrindex++][strlen] = 0;
	}
	return (1);
}

// HOW TO CREATE AN ARRAY OF STRINGS IN C (NO NEED TO CHANGE)?
// const char *a[2];
// a[0] = "blah";
// a[1] = "hmm";
// 3 malloc calls
char	**ft_split(char const *s, char c)
{
	int		arrlen;
	int		rescode;
	char	**result;

	arrlen = strcount(s, c);
	result = malloc((arrlen + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	rescode = strsplit(s, c, result, arrlen);
	if (!rescode)
		return (NULL);
	result[arrlen] = NULL;
	return (result);
}

// int	main(void)
// {
// 	printf("TEST 1\n");
// 	char **res1 = ft_split("hello world hello universe long string ", ' ');
// 	for (size_t i = 0; res1[i]; i++)
// 		printf("%s\n", res1[i]);

// 	printf("\nTEST 2\n");
// 	char **res2 = ft_split("          ", ' ');
// 	for (size_t i = 0; res2[i]; i++)
// 		printf("%s\n", res2[i]);

// 	printf("\nTEST 3\n");
// 	char **res3 = ft_split("hello", ' ');
// 	for (size_t i = 0; res3[i]; i++)
// 	    printf("%s\n", res3[i]);

// 	printf("\nTEST 4\n");
// 	char **res4 = ft_split("   lorem   ipsum dolor     sit amet, "
// 		"consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
// 	for (size_t i = 0; res4[i]; i++)
// 	    printf("%s\n", res4[i]);

// 	return (0);
// }
