/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:04:29 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/24 03:08:02 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// 	char *test=ft_strrchr(txt,'s');
// 	if(test == NULL)
// 	{
// 		printf("not found \n");
// 	}
// 	else{
// 		printf("found :");
// 		printf("%s\n",test);
// 	}
// }