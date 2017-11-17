/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 14:42:50 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/17 13:30:48 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *strnew;

	if ((strnew = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	ft_bzero(strnew, size);
	strnew[size + 1] = '\0';
	return (strnew);
}
