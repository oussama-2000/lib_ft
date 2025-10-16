/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:11:51 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/15 14:48:09 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *str, size_t n)
{
    
    size_t  i;
    unsigned char    *s;

    s = str; 
    
    i = 0;
    while(i < n)
    {
        s[i] = 0;
        i++;
    }   
}

// int main()
// {
//     char txt[] = "oussama";
//     ft_bzero(txt,2);
//     // bzero(txt,2);
   
//     int i = 0;
//     while(i < 6)
//     {
//         printf("%d\n",txt[i]);
//         i++;
//     }
// }