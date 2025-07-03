/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:20:41 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 20:43:28 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Assign an index depending on the place they should have when sorted.
void	ft_assign_id(t_stack *node)
{
	t_stack	*a;
	t_stack	*b;
	int		id;

	a = node;
	while (a)
	{
		id = 0;
		b = node;
		while (b)
		{
			if (a->value > b->value)
				id++;
			b = b->next;
		}
		a->index = id;
		a = a->next;
	}
}
