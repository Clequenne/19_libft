/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:27:43 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/09 18:16:58 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *repo, const char *to_find, size_t size)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char*)repo);
	i = 0;
	while (repo[i] && i < size)
	{
		j = 0;
		while (repo[i + j] == to_find[j] && (i + j) < size)
		{
			j++;
			if (to_find[j] == '\0')
				return ((char*)repo + i);
		}
		i++;
	}
	return (NULL);
}
