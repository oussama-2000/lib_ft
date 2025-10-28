/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:04:29 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/26 10:33:27 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// strchr starts from '\0' that's why we dont 
// handling the null terminator  maching case
char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = (int)ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)(s + s_len));
		s_len--;
	}
	return (NULL);
}
// int main()
// {
// 	const char txt[]="oussama";

// 	char *test=ft_strrchr(txt,'\0');
// 	if(test == NULL)
// 	{
// 		printf("not found \n");
// 	}
// 	else{
// 		printf("found :");
// 		printf("%s\n",test);
// 	}
// }
