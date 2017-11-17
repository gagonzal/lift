/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:03:04 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/17 15:02:53 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	int i;

	i = 0;
	if (s2[i] == '\0')
		return (char*)(s1);
	while (s1[i])
	{
		if ((ft_strncmp(s1 + i, s2, len)) == 0)
			return (char*)(s1 + i);
		i++;
	}
	return (NULL);
}
