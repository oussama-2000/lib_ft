/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:57:47 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/16 13:05:46 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    char *d;
    const char *s;
    
    
    i = 0;
    d = dest;
    s = src;
    
     if(src < src)
    {
        printf("dest before src \n");
    }
    
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }

    return (dest);
}

int main()
{
    //Overlap happens when the source and destination memory areas refer to the same region, causing the source to be overwritten while it’s still being read.
    char dest[10];
    char src[]="hello wrold";

    // printf("%s\n",ft_memmove(dest,src + 6,(sizeof(char) * 6)));

    printf("%p\n",dest);
    printf("%p\n",src);
    printf("%p\n",src);

    if(src < src)
    {
        printf("dest before src \n");
    }
}