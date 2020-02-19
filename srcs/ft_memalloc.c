/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:24:22 by clequenn          #+#    #+#             */
/*   Updated: 2018/06/29 15:30:48 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new_mem;

	new_mem = (void *)malloc(sizeof(size_t) * size);
	if (!new_mem)
		return (NULL);
	ft_bzero(new_mem, size);
	return (new_mem);
}
