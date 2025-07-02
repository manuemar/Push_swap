/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 11:56:19 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 12:49:48 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Checks that not every character are spaces.
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
