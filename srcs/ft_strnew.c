/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 15:34:16 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/08 22:41:14 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * size + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new_str[i] = '\0';
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
