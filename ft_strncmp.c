/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:21:30 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 11:29:59 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	while(i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if(s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}


// int main()
// {
// 	char *t1="oussama";
// 	char *t2="ousama";

// 	// printf("%d\n",strncmp(t1,t2,7));
// 	printf("%d\n",ft_strncmp(t2,t1,7));
	
// }