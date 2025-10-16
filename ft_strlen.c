/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:21:39 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/15 10:59:07 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t     ft_strlen(const char  *str)
{
    int     len;

    len =0;
    while(str[len] != '\0' )
    {
        len ++;
    }
    return (len);
}

// int main()
// {
//     char txt[]="oussama";
//     printf("%d",ft_strlen(txt));
// }