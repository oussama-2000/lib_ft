/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:19:59 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 14:57:53 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
// characters concerted ot its ascii
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
// int main()
// {	
//     if(ft_isalpha(97)){ // 'a'
//         printf("is alpha");
//     } 
//     else {
//         printf("is not alpha");
//     }
// }