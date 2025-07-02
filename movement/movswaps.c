/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movswaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:33:40 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 19:42:50 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Swap the first 2 elements at the top of stack a.
//Do nothing if there is only one or no elements.
//Swap the values of the variables between the first and the second node
//with an auxiliar variable.
void	sa(t_stack **a)
{
	int	aux_value;
	int	aux_index;

	if (!*a || !(*a)->next)
		return ;
	aux_value = (*a)->value;
	aux_index = (*a)->index;
	(*a)->value = (*a)->next->value;
	(*a)->index = (*a)->next->index;
	(*a)->next->value = aux_value;
	(*a)->next->index = aux_index;
	ft_printf("sa\n");
}

//Swap the first 2 elements at the top of stack b.
//Do nothing if there is only one or no elements.
void	sb(t_stack **b)
{
	int	aux_value;
	int	aux_index;

	if (!*b || !(*b)->next)
		return ;
	aux_value = (*b)->value;
	aux_index = (*b)->index;
	(*b)->value = (*b)->next->value;
	(*b)->index = (*b)->next->index;
	(*b)->next->value = aux_value;
	(*b)->next->index = aux_index;
	ft_printf("sb\n");
}

//sa and sb at the same time.
void	ss(t_stack **a, t_stack **b)
{
	int	aux_value;
	int	aux_index;

	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return ;
	aux_value = (*a)->value;
	aux_index = (*a)->index;
	(*a)->value = (*a)->next->value;
	(*a)->index = (*a)->next->index;
	(*a)->next->value = aux_value;
	(*a)->next->index = aux_index;
	aux_value = (*b)->value;
	aux_index = (*b)->index;
	(*b)->value = (*b)->next->value;
	(*b)->index = (*b)->next->index;
	(*b)->next->value = aux_value;
	(*b)->next->index = aux_index;
	ft_printf("ss\n");
}
