/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:38:26 by clequenn          #+#    #+#             */
/*   Updated: 2018/06/25 13:38:17 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	unsigned int	i;
	unsigned char	*character;

	character = (unsigned char *)str;
	i = 0;
	while (i < size)
	{
		character[i] = (unsigned char)c;
		i++;
	}
	str = (void *)character;
	return (str);
}
