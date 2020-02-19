/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:38:38 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/08 23:16:17 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
		start++;
	if (s[start] == '\0')
		return (ft_strdup(s + start));
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && end > 0)
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
