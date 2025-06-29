/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:56:19 by manuemar          #+#    #+#             */
/*   Updated: 2025/06/28 10:20:00 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Comprobar que no sean todo espacios. Si todo son espacios return 1
int	ft_validate_space(int argc, char **argv)
{
	int	i;
	int	j;
	int	found;

	i = 1;
	while (i < argc)
	{
		j = 0;
		found = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
				found = 1;
			j++;
		}
		if (found == 0)
			return (1);
		i++;
	}
	return (0);
}
