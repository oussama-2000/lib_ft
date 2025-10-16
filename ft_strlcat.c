/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:43:49 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/15 14:34:53 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize) //total buffer size (capacity in memory) the maximum number of bytes you are allowed to use in dst, including the final '\0'
{
    size_t  dst_len;
    size_t  src_len;
    size_t  i;
    size_t  j;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;
    j = dst_len;

    if(dst_len >= dstsize)
    {
        return (src_len + dstsize);
    }
    while(src[i] != '\0' )
    {
        dst[j] = src[i];
        j++;
        i++;
    }
    dst[j] = '\0';
    
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