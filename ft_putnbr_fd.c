/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbea <za1013@naver.com>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 15:31:11 by sbea              #+#    #+#             */
/*   Updated: 2020/11/05 13:40:43 by sbea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_nbr_size(int n)
{
	int		size;

	size = 1;
	while (n > 9 || n < -9)
	{
		n /= 10;
		size++;
	}
	return (size);
}

void	nbr_write(int n, int size, int fd)
{
	char	str[size + 1];
	int		tmp;

	str[size] = '\0';
	while (n > 9 || n < -9)
	{
		tmp = n % 10;
		n /= 10;
		if (tmp < 0)
			tmp *= -1;
		str[--size] = tmp + 48;
	}
	if (n < 0)
		n *= -1;
	str[--size] = n + 48;
	write(fd, str, ft_strlen(str));
}

void	ft_putnbr_fd(int n, int fd)
{
	int	size;

	size = get_nbr_size(n);
	if (n < 0)
		write(fd, "-", 1);
	nbr_write(n, size, fd);
}
