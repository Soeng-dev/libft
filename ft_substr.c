/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:44:51 by soekim            #+#    #+#             */
/*   Updated: 2020/11/20 14:52:59 by soekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (!s || !(*s))
		return (0);
	i = (int)len;
	if ((size_t)start >= ft_strlen(s))
		i = 0;
	if (!(sub = (char *)malloc(i + 1)))
		return ((void *)0);
	sub[i] = '\0';
	while (i-- > 0)
		sub[i] = s[(int)start + i];
	return (sub);
}
