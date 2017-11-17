/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:18:12 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/17 13:45:30 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	unsigned char		*str2;

	str = src;
	str2 = dst;
	i = 0;
	if (!n)
		return((void*)str2);
	while (n-- && str[i])
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (void*)(str2);
}
