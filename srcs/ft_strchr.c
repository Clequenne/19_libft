/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:15:03 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/07 20:39:14 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
	{
		while (*str)
			str++;
		return ((char*)str);
	}
	while (*str)
	{
		if (*str == c)
			return ((char*)str);
		str++;
	}
	return (NULL);
}
