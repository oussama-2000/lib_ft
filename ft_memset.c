/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:34:29 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/25 21:11:52 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// because the compiler walking throuth the memory
// byte by byte ,and it doesn't accept negative memory index
void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = str;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
