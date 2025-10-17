/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:19:49 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/17 22:40:59 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *result;
    size_t  s1_len;
    size_t  s2_len;
    size_t  i;
    size_t  j;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);

    if (!s1 || !s2) //the function will crash because ft_strlen(NULL) is invalid.
        return (NULL);

    result = malloc((s1_len + s2_len) + 1);
    
    if(!result)
    return (NULL);
    
    i = 0;
    while(i < s1_len )
    {
        result[i] = s1[i];
        i++;
    }
    j = 0;
    while(j < s2_len)
    {
        result[i] = s2[j];
        j++;
        i++;
    }
    result[i] = '\0';
    return (result);
}


// int main()
// {
//     char s1[0];
//     char s2[0];

//     char *result = ft_strjoin(s1,s2);

//     printf("%s\n",result);
// }