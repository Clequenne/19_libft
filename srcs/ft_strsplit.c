/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/29 19:56:29 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/23 15:42:14 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nb_words(char *s, char c)
{
	int	nb_word;
	int	is_word;

	nb_word = 0;
	is_word = 0;
	while (*s != '\0')
	{
		if (is_word == 0 && *s != c)
		{
			is_word = 1;
			nb_word++;
		}
		else if (is_word == 1 && *s == c)
			is_word = 0;
		s++;
	}
	return (nb_word);
}

size_t	ft_len_word(char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	char	**new_tab;
	int		i;

	if (!s)
		return (NULL);
	nb_words = ft_nb_words((char *)s, c);
	new_tab = (char **)malloc((sizeof(char *) * (nb_words + 1)));
	if (!new_tab)
		return (NULL);
	i = 0;
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		new_tab[i] = ft_strsub((char *)s, 0, ft_len_word((char *)s, c));
		if (!new_tab[i])
			return (NULL);
		s = s + ft_len_word((char *)s, c);
		i++;
	}
	new_tab[i] = NULL;
	return (new_tab);
}
