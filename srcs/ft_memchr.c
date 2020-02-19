/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:22:36 by clequenn          #+#    #+#             */
/*   Updated: 2018/06/25 13:39:38 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	unsigned char	*trans;
	unsigned int	i;

	trans = (unsigned char *)s;
	i = 0;
	while (i < size)
	{
		if (trans[i] == (unsigned char)c)
			return ((void *)trans + i);
		i++;
	}
	return (NULL);
}
