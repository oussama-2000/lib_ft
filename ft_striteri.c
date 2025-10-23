/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:30:03 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/22 18:12:35 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void    upper(unsigned int i, char *c)
// {
//     // printf("*c -> %d\n",*c);
//     // printf("c - > %p\n",c);
//     *c = *c -32;
// }
// int main()
// {
//     char    s[]="oussama";
//     ft_striteri(s,upper);
//     printf("%s\n",s);
// }