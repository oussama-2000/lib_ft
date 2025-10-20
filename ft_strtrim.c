/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:41:32 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/20 23:22:53 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}
// int main()
// {
// 	char *str = ft_strtrim("oussama", "oa");
// 	printf("%s\n", str);
// 	free(str);
// }
