/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:08:13 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/22 04:48:17 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <inttypes.h>

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int64_t result;

	i = 0;
	result = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (((INT64_MAX / 10 )- (str[i] - 48 )) < result)//TO_DO
		{
			return ((neg > 0 ) ? -1 : 0);//TO_DO
		}
		result = result * 10 + (str[i] - 48);
		i++;
	}
	//if (neg == -1)
//		result = result * neg;
	return ((int)(result * neg));
}/*


int	main(int ac, char **av)
{
	char	n[40] = "99999999999999999999999999";
	char n2[40] = "2147483647";
	int i1 = atoi(av[1]);
	int i2 = ft_atoi(av[1]);
	printf("uintmax = %llu\n", INT64_MAX);
	printf ("%d\n%d\nstrlen = %d", i1, i2, strlen(n));
}*/
