/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:06:57 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/25 11:10:38 by oamkhou          ###   ########.fr       */
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
// int	main(void)
// {
// 	const char *tests[] = {
// 		"42",
// 		"   42",
// 		"   -42",
// 		"   +42",
// 		"0042",
// 		"-0042",
// 		"  \t\n\v\f\r123",
// 		"",
// 		"  +0",
// 		"  -0",
// 		"  2147483647",        // INT_MAX
// 		" -2147483648",        // INT_MIN
// 		"9223372036854775807", // LLONG_MAX
// 		"-9223372036854775808",// LLONG_MIN
// 		"9223372036854775808", // overflow positive
// 		"-9223372036854775809",// overflow negative
// 		"  123abc456",
// 		"abc123",
// 		"    +00123",
// 		"--42",
// 		NULL
// 	};

// 	int i = 0;
// 	while (tests[i])
// 	{
// 		int std = atoi(tests[i]);
// 		int mine = ft_atoi(tests[i]);

// 		printf("Input: \"%s\"\n", tests[i]);
// 		printf("  atoi:    %d\n", std);
// 		printf("  ft_atoi: %d\n", mine);
// 		if (std == mine)
// 			printf("  ✅ OK\n");
// 		else
// 			printf("  ❌ Mismatch\n");
// 		printf("--------------------------------------\n");
// 		i++;
// 	}

// 	return 0;
// }