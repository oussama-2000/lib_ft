/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:21:30 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/23 15:08:39 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	// if (!s1 || !s2) {
	// 	return 0;
	// }
	while (i < n )
	{
		
		if (s1 && s2 && (s1[i] != s2[i]))
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
// int main()
// {
// 	char *t1=NULL;
// 	char *t2=NULL;

// 	printf("%d\n",strncmp(NULL,NULL,-1));
// }