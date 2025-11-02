/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:20:43 by oamkhou           #+#    #+#             */
/*   Updated: 2025/11/02 00:56:43 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;
	size_t	i;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static void	ft_free_all(char **arr, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		n--;
		free(arr[n]);
	}
	free(arr);
}

static int	ft_alloc(char ***res, const char *s, char c)
{
	if (s == NULL)
	{
		return (0);
	}
	*res = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!*res)
	{
		return (0);
	}
	return (1);
}

static int	ft_sub(char **res, const char *s, size_t start, size_t i)
{
	*res = ft_substr(s, start, i - start);
	if (!*res)
	{
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	if (ft_alloc(&res, s, c) == 0)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			if (ft_sub(&res[j], s, start, i) == 0)
				return (ft_free_all(res, j), NULL);
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
