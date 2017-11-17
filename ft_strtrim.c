/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 15:25:52 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/17 14:52:56 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizeword(const char *s)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s[i] == ' ' && s[i] == '\t' && s[i] == '\n')
		i++;
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
	{
		ret++;
		i++;
	}
	return (ret);
}

char		*ft_strtrim(char const *s)
{
	char const	*str;
	int			len;
	int			i;
	int			j;

	i = 0;
	j = 0;
	len = ft_sizeword(s);
	if ((str = ft_strnew(len)) == NULL)
		return (NULL);
	while (s[i] == ' ' && s[i] == '\t' && s[i] == '\n')
		i++;
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
	{
		((char*)str)[j] = ((char*)s)[i];
		j++;
		i++;
	}
	((char*)str)[j] = '\0';
	return (char*)(str);
}
