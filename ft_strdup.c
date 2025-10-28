/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:04:08 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/26 12:26:27 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// We allocate in strdup to create a new,
 // independent copy of the string in memory 
 // so it can be modified or freed without affecting the original.

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	if (!s)
		return (NULL);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// int main()
// {
// 	const char txt[]="hello";
// 	printf("text before : %s\n",txt);
// 	char *new = ft_strdup(txt);
// 	printf("text after : %s\n",txt);
// 	printf("new string : %s\n",new);
// 	free(new);
// }