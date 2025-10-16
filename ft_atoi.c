/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:06:57 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/15 10:32:37 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{

    int signe;
    int out;
    int i;
    
    signe = 1;
    out = 0;
    i = 0;
 

    while(str[i] == ' ')
    {
        i++;
    }
    
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
        {
            signe *= -1;
        }
        i++;
    }
    
    while(str[i] >= '0' && str[i] <= '9')
    {
        out = (out *10) + (str[i] - '0');
        i++;
    }
    return (out * signe );
    
}

// int main()
// {
//     char buffer[]= "-11abc";
    
//     printf("%d\n",ft_atoi(buffer));
//     printf("%d\n",atoi(buffer));
// }