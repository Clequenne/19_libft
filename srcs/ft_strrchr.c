/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:19:26 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/07 20:41:19 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*tmp;

	tmp = str;
	while (*tmp)
		tmp++;
	if (c == '\0')
		return ((char*)tmp);
	while (--tmp >= str)
		if (c == *tmp)
			return ((char*)tmp);
	return (NULL);
}
