/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:32:38 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 21:32:06 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	// printf("the i: %d \n",i);
	if (c == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
// int main()
// {
// 	char *txt = "oussama";

// 	char *test = strchr(txt, '\0');
// 	if (test == NULL)
// 	{
// 		printf("not found \n");
// 	}
// 	else
// 	{
// 		printf("found :");
// 		printf("%s\n", test);
// 	}
// }