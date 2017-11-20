/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:08:13 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/20 18:39:31 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
int	is_supp(const char *str)
{
	char s1[20];

	s1 = "2147483647";
	if(ft_strncmp(str, s1, ft_strlen(str)) > 0)
		return (1);
	return (0);
}

int	is_low(const char *str)
{
	char s2[20];

	s2 = "-2147483648";
	if (ft_strncmp(str, s2, ft_strlen(str)) < 0)
		return (1);
	return (0);
}
*/
int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int result;

	i = 0;
	result = 0;
	/*
	if (is_supp(str))
		return (-1);
	if (is_low(str))
		return (0);
		*/
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - 48);
	if (neg == -1)
		result = result * neg;
	return (result);
}

/*
int	main(int ac, char **av)
{
	char n[40] = "-9999";

	int i1 = atoi(n);
	int i2 = ft_atoi(n);
	printf ("%d\n%d\n", i1, i2);
}
*/
