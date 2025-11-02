/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:21:10 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/30 21:16:53 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int		ni;
	long	num;

	num = n;
	ni = 0;
	if (num <= 0)
	{
		ni = 1;
		num = -num;
	}
	while (num > 0)
	{
		num = num / 10;
		ni++;
	}
	return (ni);
}

char	*ft_itoa(int n)
{
	char	*out;
	int		len;
	int		sign;
	long	num;
	int		i;

	num = n;
	sign = (num < 0);
	len = ft_counter(n);
	out = malloc(sizeof(char) * (len + 1));
	if (!out)
		return (NULL);
	out[len] = '\0';
	if (num < 0)
		num = -num;
	i = len - 1;
	while (i >= 0)
	{
		out[i--] = (num % 10) + '0';
		num = num / 10;
	}
	if (sign)
		out[0] = '-';
	return (out);
}
