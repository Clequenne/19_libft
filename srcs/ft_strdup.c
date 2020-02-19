/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:54:59 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/07 17:41:46 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen(str);
	result = (char *)malloc(sizeof(char) * length + 1);
	if (!result)
		return (NULL);
	while (str[i] != '\0')
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
