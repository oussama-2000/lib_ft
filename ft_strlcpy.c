/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:35:11 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/25 23:49:27 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// + 1 in while loop to reserve byte for '\0'
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len);
	while (i + 1 < dstsize && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

int main()
{
   const char input[]="oussam";
   char range[5];

   size_t len=ft_strlcpy(range,input,sizeof(range));
//    printf("%d\n",len);
   if(len  > sizeof(range))
   {
    printf("input is big than the range "); //truncation
   }
}