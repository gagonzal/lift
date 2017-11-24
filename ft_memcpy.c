/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:18:12 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/24 05:12:06 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
//	const unsigned char	*str;
//	unsigned char		*str2;

//	str = src;
//	str2 = dst;
	i = 0;
	if (!n)
		return(dst);
	while  (src && ((unsigned char*)src)[i] && i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	((unsigned char*)dst)[i] = '\0';
	return (dst);
}
