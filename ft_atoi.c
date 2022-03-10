/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stunca <stunca@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:44:12 by stunca            #+#    #+#             */
/*   Updated: 2022/02/25 16:25:35 by stunca           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\r' || c == '\f' || c == '\v'
		|| c == '\n' || c == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	res;

	res = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	res = res * sign;
	if (res >= -2147483648 && res <= 2147483647)
		return (res);
	if (sign == -1)
		return (0);
	return (-1);
}
