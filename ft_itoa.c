/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:21:10 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/25 17:05:19 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <limits.h>
#include "libft.h"
// if (num <= 0) //  account for '0' or the '-' sign
// num = -num; // make positive for digit count while loop
int	ft_counter(int n)
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
// int main()
// {
// 	char *s;

// 	s = ft_itoa(0);
// 	printf("0 → %s\n", s);
// 	free(s);

// 	s = ft_itoa(12345);
// 	printf("12345 → %s\n", s);
// 	free(s);

// 	s = ft_itoa(-98765);
// 	printf("-98765 → %s\n", s);
// 	free(s);

// 	s = ft_itoa(INT_MAX);
// 	printf("INT_MAX (%d) → %s\n", INT_MAX, s);
// 	free(s);

// 	s = ft_itoa(INT_MIN);
// 	printf("INT_MIN (%d) → %s\n", INT_MIN, s);
// 	free(s);

// 	s = ft_itoa(-1);
// 	printf("-1 → %s\n", s);
// 	free(s);

// 	s = ft_itoa(10);
// 	printf("10 → %s\n", s);
// 	free(s);
// }
