/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:20:41 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/08 22:39:39 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Searches all ids to return the bigger one.
//I just realized it probably returns the same value as the size of the stack,
//so this function is useless, but I'm to tired and in a hurry to check.
int	ft_find_max_id(t_stack **stack)
{
	int		max;
	t_stack	*aux;

	if (!stack)
		return (0);
	aux = *stack;
	max = aux->index;
	while (aux)
	{
		if (aux->index > max)
			max = aux->index;
		aux = aux->next;
	}
	return (max);
}

//Assigns an index depending on the place they should have when sorted.
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
