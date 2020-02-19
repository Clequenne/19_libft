/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 18:07:14 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/08 22:53:41 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_str;

	if (!s)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	new_str[len] = '\0';
	while (i < len && s[start + i] != '\0')
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
