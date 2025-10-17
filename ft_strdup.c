/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:04:08 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/17 15:38:45 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t size;
	size_t	i;


	size = ft_strlen(s);
	str = malloc( size + 1);
	
	if (!str)
    	return (NULL);

	i = 0;

	while(i < size )
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

// 	printf("%s",ft_strdup(txt));
// }