/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdagai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:12:45 by tdagai            #+#    #+#             */
/*   Updated: 2020/02/29 14:37:22 by tdagai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t destlen;
	size_t index;
	size_t ctr;

	destlen = 0;
	while (dest[destlen] != '\0')
		destlen++;
	ctr = 0;
	while (src[ctr] != '\0')
		ctr++;
	if (size == 0)
		return (ctr);
	if (size <= destlen)
		ctr += size;
	else
		ctr += destlen;
	index = 0;
	while (src[index] != '\0' && destlen < size - 1)
		dest[destlen++] = src[index++];
	dest[destlen] = '\0';
	return (ctr);
}
