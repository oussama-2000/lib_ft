/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:40:58 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/26 12:50:06 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// allocated empty substring to make us freeing the memory after
// len : lenght of the created substring
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	i = start;
	j = 0;
	while (len > 0)
	{
		sub[j] = s[i];
		i++;
		j++;
		len--;
	}
	sub[j] = '\0';
	return (sub);
}
// int main()
// {
// 	const char s[]="oussama";
// 	char *ptr=ft_substr(s,1,30);
// 	printf("%s\n",ptr);
// }