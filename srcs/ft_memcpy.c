/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:58:58 by clequenn          #+#    #+#             */
/*   Updated: 2018/06/25 18:17:41 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*trans_1;
	unsigned char	*trans_2;

	trans_1 = (unsigned char *)dest;
	trans_2 = (unsigned char *)src;
	while (size > 0)
	{
		*trans_1++ = *trans_2++;
		size--;
	}
	return (dest);
}
