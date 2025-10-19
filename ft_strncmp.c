/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:21:30 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/19 00:51:30 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i]
			|| s1[i] == '\0' || s2[i] == '\0')
			// if any one (s1 ,s2) ends ,out and don't complete
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
// int main()
// {
// 	char *t1="oussama";
// 	char *t2="ous";

// 	printf("%d\n",ft_strncmp(t2,t1,7));
// }