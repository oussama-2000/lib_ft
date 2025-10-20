/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:04:08 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/19 18:55:50 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
// 	const char txt[]="oussama";

// 	printf("%s\n",ft_strdup(txt));

// // We allocate in strdup to create a new,
// // independent copy of the string in memory 
// so it can be modified or freed without affecting the original.
// }