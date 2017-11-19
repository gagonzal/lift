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
#include "string.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
		size_t i;

		i = 0;
		if (s2[i] == '\0')
				return (char*)(s1);
		while (s1[i] &&	i < len)
		{
				if ((ft_strncmp(s1 + i, s2, ft_strlen(s2)) == 0))
						return (char*)(s1 + i);
				i++;
		}
		return (NULL);
}

int		main(void)
{

		char    *s2 = "see F your FF return FF now FF";
		char    *s1 = "FF";
		size_t  max = strlen(s1) + 1;

		char    *i1 = strnstr(s1, s2, max);
		char    *i2 = ft_strnstr(s1, s2, max);

		printf("{%s},%zu\n", i1, max);
		printf("[%s]", i2);
}
