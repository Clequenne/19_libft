/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:51:28 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/04 18:30:03 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	unsigned char	*trans;

	trans = (unsigned char *)s;
	while (size > 0)
	{
		*trans++ = '\0';
		size--;
	}
}
