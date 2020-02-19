/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:20:09 by clequenn          #+#    #+#             */
/*   Updated: 2018/06/29 19:37:36 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new_str;
	size_t	len_1;
	size_t	len_2;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char *) * (len_1 + len_2) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (len_1-- > 0)
		new_str[i++] = s1[j++];
	j = 0;
	while (len_2-- > 0)
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
