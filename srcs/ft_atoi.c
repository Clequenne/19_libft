/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clequenn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 16:00:12 by clequenn          #+#    #+#             */
/*   Updated: 2018/06/25 17:45:20 by clequenn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' ||
			*str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	result = 0;
	while (*str >= 48 && *str <= 57)
	{
		result = 10 * result + *str - '0';
		str++;
	}
	return (result * sign);
}
