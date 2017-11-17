/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:39:41 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/17 17:19:14 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long min;

	min = n;
	if (min < 0)
	{
		min = min * -1;
		ft_putchar_fd('-', fd);
	}
	if (min < 10 && min >= 0)
		ft_putchar_fd(min + '0', fd);
	else
	{
		ft_putnbr(min / 10);
		ft_putnbr(min % 10);
	}
}
