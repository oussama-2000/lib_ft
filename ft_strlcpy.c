/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:35:11 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/15 11:54:00 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len;
    size_t i;

    len = ft_strlen(src);
    i = 0;
    
    while(i < dstsize && len >= dstsize)
    {
        dst[i]=src[i];
        i++;
    }
    dst[i] = '\0';
    
    return (len);
}

// int main()
// {
//    const char input[]="oussama";
//    char range[5];

//    size_t len=ft_strlcpy(range,input,sizeof(range));
//    if(len  > sizeof(range))
//    {
//     printf("input is big than the range"); //truncation
//    }

    
// }