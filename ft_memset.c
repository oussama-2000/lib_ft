/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:34:29 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/19 18:07:14 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;
	//because the compiler walking throuth the memory
	//byte by byte ,and it doesn't accept negative memory index
	i = 0;
	s = str;
	// implicit cast
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	return (str);
}
// int main()
// {
//     // char txt[] = "oussama";
//     // size_t size = (sizeof(char) * 2);
//     // printf("%s\n",ft_memset(txt,'a',size));
//     // printf("%s\n",memset(txt,255,size));

//     int numbers[]={1,2,3,4,5};

//     size_t size = (sizeof(int) * 4);
//     printf("size : %d\n",size);

//     ft_memset(numbers,0,size);
//     int i = 0;
//     while(i < 5)
//     {
//         printf("%d\n",numbers[i]);
//         i++;
//     }
// }


