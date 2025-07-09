/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isintrange.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 10:07:46 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/08 23:50:36 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isintrange(char *str)
{
	int			i;
	int			sign;
	long long	parsednum;

	i = 0;
	sign = 1;
	parsednum = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		parsednum = parsednum * 10 + (str[i] - '0');
		i++;
	}
	if ((parsednum * sign > INT_MAX) || (parsednum * sign < INT_MIN))
		return (0);
	return (1);
}
