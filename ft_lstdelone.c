/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:10:43 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/22 05:35:49 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *new;
	void	*data;
	size_t  size;

	new = *alst;
	data = new->content;
	size = new->content_size;
	new = del(data, size);
	free(new);
	new->next = NULL;
}
