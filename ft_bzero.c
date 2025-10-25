/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:11:51 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/25 14:44:04 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// we cast to unsigned char (1 byte) to treat any memory as raw bytes,
// so we can manipulate memory byte by byte.
//  using unsigned instead of char : for safty ,
// because memory bytes is treated as 0-255 .
void	ft_bzero(void *str, size_t n)
{
	unsigned char	*s;
	size_t	i;

	s = str;
	i = 0;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
}
