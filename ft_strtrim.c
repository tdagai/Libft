/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdagai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 22:50:01 by tdagai            #+#    #+#             */
/*   Updated: 2020/02/24 20:27:40 by tdagai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char			*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*str;

	if (!s)
		return (NULL);
	start = 0;
	end = 0;
	while (s[start] && is_whitespace(s[start]))
		start += 1;
	end = ft_strlen(&s[start]) - 1;
	while (s[start] && is_whitespace(s[end + start]))
		end -= 1;
	if (!(str = ft_strnew(end + 1)))
		return (NULL);
	ft_strncpy(str, (s + start), (end + 1));
	return (str);
}
