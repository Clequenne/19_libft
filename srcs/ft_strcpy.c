/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 17:35:29 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/04 19:02:18 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	char	*res_dest;

	i = 0;
	res_dest = dest;
	while (src[i] != '\0')
	{
		res_dest[i] = src[i];
		i++;
	}
	res_dest[i] = '\0';
	dest = res_dest;
	return (dest);
}
