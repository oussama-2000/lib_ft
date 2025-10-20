/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:39:45 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/19 16:20:06 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *txt, const char *query, size_t len)
{
	size_t	j;
	size_t	i;

	if (query[0] == '\0')
		return ((char *)txt);
	i = 0;
	while (txt[i] != '\0' && i < len)
	{
		j = 0;
		while (txt[i + j] == query[j] && (i + j) < len)
		{
			if (query[j + 1] == '\0')
				return ((char *)(txt + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	const char big[] = "ouassama amkhou";
// 	const char little[] = "am";

// 	printf("Result: %s\n", ft_strnstr(big, little, 14));
// }