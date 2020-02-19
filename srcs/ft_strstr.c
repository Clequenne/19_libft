/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 13:28:59 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/07 21:07:29 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *repo, const char *to_find)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char *)repo);
	while (repo[i])
	{
		while (repo[i] != to_find[0])
		{
			i++;
			if (repo[i] == '\0')
				return (NULL);
		}
		while (repo[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (j == ft_strlen(to_find))
			return ((char*)&repo[i]);
		i++;
	}
	return (NULL);
}
