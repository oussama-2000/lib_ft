/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:11:51 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/18 15:58:03 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*s;
	size_t			i;

	s = str;
	i = 0;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
}
// int main()
// {
//     char txt[] = "oussama";
// 	int len = ft_strlen(txt);
//     ft_bzero(txt,(sizeof(char) * len));
//     // bzero(txt,2);

//     int i = 0;
//     while(i < len)
//     {
//         printf("%d\n",txt[i]);
//         i++;
//     }
// }