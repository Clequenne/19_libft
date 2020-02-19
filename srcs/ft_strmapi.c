/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 17:40:13 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/08 22:44:15 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;
	size_t			len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
