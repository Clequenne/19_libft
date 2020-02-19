/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:36:43 by clequenn          #+#    #+#             */
/*   Updated: 2018/06/25 13:45:09 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*trans_1;
	unsigned char	*trans_2;

	trans_1 = (unsigned char *)s1;
	trans_2 = (unsigned char *)s2;
	while (size > 0)
	{
		if (*trans_1 != *trans_2)
			return (*trans_1 - *trans_2);
		trans_1++;
		trans_2++;
		size--;
	}
	return (0);
}
