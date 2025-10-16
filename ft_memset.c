/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:34:29 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/16 12:34:33 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c,size_t n)
// why void * : to make the function works with any data type 

// why int c and not char : general the C functions parametter returned into a int can read by the system ,and because the int can hold all values can fit into bytes

// why size_t : because the size_t can hold and possbility of numbers ;to avoid the overflow 
// why size_t and to unsigned long long  : because the size_t is the standar for C ,and the size_t is portible with different systems bit (32,64)


{
    unsigned char       *s; // because the compiler walking throuth the memory byte by byte ,thats why the byte should be unsigned not signed (above 127)
    size_t     i;
    
    i = 0;
    s = str;  // castination                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   

    while(i < n)
    {
        s[i] = c;
        i++;
    }
    return (str);
}

// int main()
// {
//     char txt[] = "oussama";
//     size_t size = (sizeof(char) * 2);
//     printf("%s\n",ft_memset(txt,'a',size));
//     printf("%s\n",memset(txt,'a',size));

    
//     // int numbers[]={1,2,3,4,5};
    
//     // size_t size = (sizeof(int) * 4);
//     // printf("size : %d\n",size);
    
//     // ft_memset(numbers,0,size);
//     // int i = 0;
//     // while(i < 5)
//     // {
//     //     printf("%d\n",numbers[i]);
//     //     i++;
//     // }
    
    
// }