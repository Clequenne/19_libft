/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:04:52 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/07 18:14:32 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t size)
{
	char *s2;

	s2 = dest;
	while (*src != '\0' && size > 0)
	{
		*dest++ = *src++;
		size--;
	}
	while (size > 0)
	{
		*dest++ = '\0';
		size--;
	}
	return (s2);
}
