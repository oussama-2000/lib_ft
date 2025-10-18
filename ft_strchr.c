/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:32:38 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 11:02:59 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s,int c)
{
	int	i;
	i = 0;
	
	if(!s)
	{
		return (NULL);
	}
	while(s[i])
	{
		if(s[i] == (char)c)
		{
			return ((char *)(s + i));

		}
		i++;
	}
	if(c == '\0')
	{
		return ((char *)(s + i));
	}
	return (NULL);
}

// int main()
// {
// 	const char txt[]="oussama";

// 	char *test=ft_strchr(txt,'\0');
// 	if(test == NULL)
// 	{
// 		printf("not found \n");
		
// 	}
// 	else{
// 		printf("found :");
// 		printf("%s\n",test);
// 	}

// }