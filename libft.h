/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:42:49 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/15 20:56:37 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>

int     ft_isalpha(int  c);
int     ft_isdigit(int  c);
int     ft_isascii(int  c);
int     ft_isprint(int  c);
size_t     ft_strlen(const char  *str);
void    *ft_memset(void *str, int c,size_t n);
void    ft_bzero(void *str, size_t n);
int    ft_toupper(int   c);
int     ft_tolower(int  c);
int ft_atoi(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
void    *ft_memcpy(void *dest, const void *src, size_t n);


#endif