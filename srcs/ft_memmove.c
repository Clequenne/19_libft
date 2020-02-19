/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:33:30 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/07 17:36:54 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char *strsrc;
	char *strdst;

	strsrc = (char*)src;
	strdst = (char*)dest;
	if (strsrc < strdst)
	{
		strsrc = strsrc + size - 1;
		strdst = strdst + size - 1;
		while (size > 0)
		{
			*strdst-- = *strsrc--;
			size--;
		}
	}
	else
	{
		while (size > 0)
		{
			*strdst++ = *strsrc++;
			size--;
		}
	}
	return (dest);
}
