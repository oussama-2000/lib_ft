/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:19:49 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/19 23:37:40 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s1 || !s2) // the function will crash because ft_strlen(NULL) is invalid.
		return (NULL);
	result = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		result[i] = s2[j];
		j++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
// int main()
// {
// 	char s1[] = "oussama ";
// 	char s2[] = "amkhou";
// 	char *result = ft_strjoin(s1, s2);
// 	printf("%s\n", result);
// }