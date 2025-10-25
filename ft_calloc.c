/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 17:52:08 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/25 15:35:27 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(count * size);
	if (!res)
	{
		return (NULL);
	}
	ft_bzero(res, count * size);
	return (res);
}

// void	print_bytes(void *ptr, size_t n)
// {
// 	unsigned char *p = ptr;
// 	for (size_t i = 0; i < n; i++)
// 		printf("%02X ", p[i]);
// 	printf("\n");
// }

// // --- main tests ---
// int	main(void)
// {
// 	printf("==== Test 1: Normal allocation ====\n");
// 	int *ft_arr = ft_calloc(5, sizeof(int));
// 	int *sys_arr = calloc(5, sizeof(int));
// 	if (!ft_arr || !sys_arr)
// 	{
// 		printf("Allocation failed!\n");
// 		return (1);
// 	}
// 	printf("ft_calloc bytes: ");
// 	print_bytes(ft_arr, 5 * sizeof(int));
// 	printf("calloc bytes:    ");
// 	print_bytes(sys_arr, 5 * sizeof(int));
// 	free(ft_arr);
// 	free(sys_arr);
// 	printf("\n");

// 	printf("==== Test 2: count = 0 ====\n");
// 	void *ft_zero = ft_calloc(0, sizeof(int));
// 	void *sys_zero = calloc(0, sizeof(int));
// 	printf("ft_calloc(0)  -> %p\n", ft_zero);
// 	printf("calloc(0)     -> %p\n", sys_zero);
// 	free(ft_zero);
// 	free(sys_zero);
// 	printf("\n");

// 	printf("==== Test 3: size = 0 ====\n");
// 	void *ft_zero2 = ft_calloc(10, 0);
// 	void *sys_zero2 = calloc(10, 0);
// 	printf("ft_calloc(10, 0)  -> %p\n", ft_zero2);
// 	printf("calloc(10, 0)     -> %p\n", sys_zero2);
// 	free(ft_zero2);
// 	free(sys_zero2);
// 	printf("\n");

// 	printf("==== Test 4: Overflow case ====\n");
// 	void *ft_over = ft_calloc(__SIZE_MAX__, 2);
// 	void *sys_over = calloc(__SIZE_MAX__, 2);
// 	printf("ft_calloc overflow -> %p\n", ft_over);
// 	printf("calloc overflow    -> %p\n", sys_over);
// 	free(ft_over);
// 	free(sys_over);
// 	printf("\n");

// 	return (0);
// }