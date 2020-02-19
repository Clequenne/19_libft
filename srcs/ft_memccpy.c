/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:09:01 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/04 18:48:10 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t size)
{
	while (size--)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
			return (dest);
	}
	return (NULL);
}
