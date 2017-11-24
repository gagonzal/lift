/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:40:43 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/24 03:47:44 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
	}
	*ap = NULL;
}
/*
void	ft_memdel1(void *ap)
{
	if (ap)
	{
		free(ap);
	}
	ap = NULL;
}

int	main()
{
	char	*str;
	char	*tmp;

	str = ft_strnew(2);
	tmp = ft_strnew(2);
	str[0] = 'A';
	tmp[0] = 'A';
	ft_memdel((void**)&tmp);
	ft_memdel1((void*)str);
	
	printf("[%s]\n", tmp);
	printf("[%s]\n", str);

return 0;
}*/
