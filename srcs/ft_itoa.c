/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/01 22:01:46 by clequenn          #+#    #+#             */
/*   Updated: 2018/07/19 18:13:44 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nb_digits(int n)
{
	size_t	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*new_str;
	size_t			nb_digits;
	unsigned int	n_copy;

	nb_digits = ft_nb_digits(n);
	n_copy = n;
	if (n < 0)
	{
		n_copy = -n;
		nb_digits++;
	}
	if (!(new_str = ft_strnew(nb_digits)))
		return (NULL);
	new_str[--nb_digits] = n_copy % 10 + '0';
	while (n_copy /= 10)
		new_str[--nb_digits] = n_copy % 10 + '0';
	if (n < 0)
		*(new_str + 0) = '-';
	return (new_str);
}
