/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gagonzal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:17:19 by gagonzal          #+#    #+#             */
/*   Updated: 2017/11/24 05:15:06 by gagonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *new;

	if (!lst)
		return NULL;
	while (lst)
	{
		new = ft_lstnew(new->content, new->content_size);
		new = f(lst);
		lst = lst->next;
		new = new->next;
	}
	return (new);
}
