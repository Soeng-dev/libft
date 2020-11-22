/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 14:44:51 by soekim            #+#    #+#             */
/*   Updated: 2020/11/15 05:01:24 by soekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = (int)n;
	str = (char *)s;
	while (--i >= 0)
		str[i] = 0;
}