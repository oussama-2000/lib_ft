/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:57:47 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 17:19:19 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (n > 0)
		{
			d[n] = s[n];
			n--;
		}
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	//Overlap happens when the source and destination 
// memory areas refer to the same region,
//  causing the source to be overwritten 
// while it’s still being read.
// 	char dest[10];
// 	char src[]="hello wrold";

// 	 printf("%s\n",ft_memmove(src,src + 6,(sizeof(char) * 6)));

// 	// printf("%p\n",dest);
// 	// printf("%p\n",src);
// 	// printf("%p\n",src);

// 	// if(dest < src)
// 	// {
// 	// 	printf("dest before src \n");
// 	// }
// }