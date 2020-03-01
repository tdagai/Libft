/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdagai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 17:23:48 by tdagai            #+#    #+#             */
/*   Updated: 2020/02/24 19:04:16 by tdagai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*head;
	t_list	*temp;

	temp = lst;
	if (!lst)
		return (NULL);
	fresh = (f)(temp);
	head = fresh;
	while (temp->next)
	{
		temp = temp->next;
		fresh->next = (f)(temp);
		fresh = fresh->next;
	}
	return (head);
}
