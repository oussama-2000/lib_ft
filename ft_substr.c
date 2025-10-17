/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:40:58 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/17 16:22:45 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s,  int start, size_t len)
{
	char	*alloc;
	size_t	i;


	// size = ft_strlen(s + start);
	alloc = malloc(len + 1);
	
	if(!alloc)
	{
		return (NULL);
	}
	i = 0;
	while(i < len )
	{
		alloc[i] = s[i];
	}
	
  
}

int main()
{
	const char s[]="oussama";
	printf("%p",ft_substr(s,2,4));
	
}