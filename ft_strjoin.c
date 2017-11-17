/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:21:42 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/17 15:01:07 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char const *str;

	if ((str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))) == NULL)
		return (NULL);
	str = ft_strcat(s1, s2);
	return (char*)(str);
}
