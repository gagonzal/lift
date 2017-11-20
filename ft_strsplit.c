/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:32:14 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/20 19:44:27 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizeword(const char *s, int i, char c)
{
	int ret;

	ret = 0;
	while (s[i] && s[i] != c)
	{
		ret++;
		i++;
	}
	return (ret);
}

static int	nb_words(const char *str, char c)
{
	int ret;
	int index;

	index = 0;
	ret = 0;
	while (str && str[index])
	{
		while (str[index] && str[index] == c)
			index++;
		if (str[index] && str[index] != c)
			ret++;
		while (str[index] && str[index] != c)
			index++;
	}
	return (ret);
}

char		**ft_strsplit(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((tab = (char**)malloc(sizeof(char*) * (nb_words(s, c) + 1))) == NULL)
		return (tab);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			k = 0;
			if ((tab[j] = malloc(sizeof(char) * (ft_sizeword(s, i, c) + 1)))
				== NULL)
				return (NULL);
			while (s[i] && s[i] != c)
				tab[j][k++] = s[i++];
			tab[j++][k] = '\0';
		}
	}
	tab[j] = NULL;
	return (tab);
}
/*
int	main(int ac, char **av)
{

	char **tab;
	int i;

	i = 0;
	tab = ft_strsplit(av[1], ' ');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
*/
