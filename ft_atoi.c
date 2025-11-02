/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:06:57 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/30 11:19:44 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	out;
	int			i;

	sign = 1;
	out = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((out > (9223372036854775807 - (str[i] - '0')) / 10) && sign == 1)
			return (-1);
		if ((out > (9223372036854775807 - (str[i] - '0')) / 10) && sign == -1)
			return (0);
		out = (out * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(out * sign));
}
