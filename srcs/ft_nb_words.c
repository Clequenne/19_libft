/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nb_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 16:27:36 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/04 18:58:20 by clequenn         ###   ########.fr       */
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
