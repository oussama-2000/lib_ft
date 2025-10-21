/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:21:10 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/22 00:00:09 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int	ft_counter(int n)
{
	int	ni;
	long num;

	num = n;
	ni = 0;
	if (num <= 0)       //  account for '0' or the '-' sign 
	{
		ni = 1;
		num = -num;     // make positive for digit count 
	}
	while(num > 0)
	{
		num = num / 10;
		ni++;
	}
	return (ni);
}
char	*ft_itoa(int n)
{

	char	*out;
	int	len;
	int	sign;
	long	num;
	int	i;

	num = n;
	sign = (num < 0) ? -1 : 1;
	len = ft_counter(n);
	
	out = malloc(sizeof(char) * ( len + 1));
	if(!out)
		return (NULL);
		
	out[len] = '\0';
	
	if(num < 0)
		num = -num;
	
	i = len - 1;
	
	while ( i >= 0)
	{
		out[i] = (num % 10 ) + '0';
		num = num / 10;
		i--;
		// printf("%d\n",i);
	}
	if(sign < 0)
	{
		out[0]= '-';
	}
	return out;
}

int main()
{
	//   4500 - > "4500"
	// printf("the number of 4500 :%d\n",ft_counter(4500));
	// printf("%d\n",4500);
	
	printf("%s\n",ft_itoa(-4500));
}
