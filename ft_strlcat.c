/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:43:49 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 17:46:34 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// total buffer size (capacity in memory) the maximum 
// number of bytes you are allowed to use in dst, including the final '\0'
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	// If buffer size is smaller than the existing string, just return.
	if (dst_len >= dstsize)
	{
		return (src_len + dstsize);
	}
	// Copy from src to dst until we reach dstsize - 1
	while (src[i] != '\0' && dst_len + 1 < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}
// int main()
// {
//     char dst[13]="oussama";
//     char src[]="amkhou";

//     // ft_strlcat(dst,src,2);
//     // printf("ft_strlcat :%d\n", dst);
//     // strlcat(dst,src,2);
//     // printf(" strlcat :%d\n", dst);

//     printf("%d\n",ft_strlcat(dst,src,2));
//     // printf("%d\n",strlcat(dst,src,2));

// }