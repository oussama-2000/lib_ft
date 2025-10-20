/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:20:43 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/20 23:38:41 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   ft_count_words(const char *s, char c)
{
    size_t  count;
    int in_word;
    size_t  i;
    
    i = 0;
    count = 0;
    in_word = 0;
    while (s[i])
    {
        if (s[i] != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (s[i] == c)
            in_word = 0;
        i++;
    }
    return (count);
}
void free_all(char **arr, size_t n)
{
    size_t i;

    i = 0;
    while (n > i)
    {
        n--; // because we want to free the fail index not the current index
        free(arr[n]);
    }
    free(arr);
}

char **ft_split(char const *s, char c)
{
    char **res;
    size_t i;
    size_t j;
    size_t start;

    i = 0;
    j = 0;
    if (!s || (!(res = malloc((ft_count_words(s, c) + 1) * sizeof(char *)))))
        return NULL;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            start = i;
            while (s[i] && s[i] != c)
                i++;
            if (!(res[j] = ft_substr(s, start, i - start)))
                return (free_all(res, j), NULL);
            j++;
        }
    }
    res[j] = NULL;
    return res;
}
// int main()
// {
//     char s[] = ",ous,sam,,,,amkhou,";
//     char **result = ft_split(s, ',');
//     int i = 0;
//     while (result[i])
//     {
//         printf("%s\n", result[i]);
//         i++;
//     }
//     free(result);
//     // printf("%d\n",ft_count_words(s,','));
// }