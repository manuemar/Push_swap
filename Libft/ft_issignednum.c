/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issignednum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:45:24 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/09 09:05:08 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_issignednum(char *str)
{
	int i;

	if (!str || !str[0])
		return (0);
	i = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		i++;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
