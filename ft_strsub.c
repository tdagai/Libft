/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdagai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:13:07 by tdagai            #+#    #+#             */
/*   Updated: 2020/02/24 19:56:25 by tdagai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	ctr;

	if (!s || !(fresh = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ctr = 0;
	while (ctr < len)
	{
		fresh[ctr] = s[start + ctr];
		ctr++;
	}
	fresh[ctr] = 0;
	return (fresh);
}
