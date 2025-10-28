/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oamkhou <oamkhou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:10:01 by oamkhou           #+#    #+#             */
/*   Updated: 2025/10/26 17:09:00 by oamkhou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <fcntl.h>
// #include <unistd.h>
// fd points to a file ; is the link between program and resources
// kernel is the resources manager 
// 0-> stdin
// 1 -> stdout
// 2-> stderr
// 3 - 9 -> files
void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// int main()
// {
//     // --------getting file descriptor
//     // int fd= open("text2.txt",O_WRONLY | O_CREAT);
//     // ft_putchar_fd('h',fd);

//     // ---------- different between stdin and stdout
//     // char buffer[20];
//     // int n = read(0, buffer, 20);  // stdin
//     // write(1, buffer, n);          // stdout

//     // --------- different between stdout and stderr by redirects output
//     // try this
//     // write(2, "This is stderr\n", 15);
//     // write(1, "This is stdout\n", 15);
//     // and int terminal
//     // ./a.out 2> output.txt -> this is stderr
//     // ./a.out 1> output.txt -> this is stdout

// }

// int main()
// {

//     ft_putchar_fd('h',1);
// }