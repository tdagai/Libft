/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdagai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:37:29 by tdagai            #+#    #+#             */
/*   Updated: 2020/02/24 19:07:21 by tdagai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;
	t_list	*ptr;

	if (!alst || !(*alst))
		return ;
	ptr = *alst;
	while (ptr->next != NULL)
	{
		temp = ptr;
		ft_lstdelone(&ptr, del);
		ptr = temp->next;
	}
	ft_lstdelone(&ptr, del);
	*alst = NULL;
}
