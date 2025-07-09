/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:52:28 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/09 08:54:31 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Searches for the lower id and returns the position of the node in the stack.
int	ft_min_num_pos(t_stack **stack)
{
	t_stack	*aux;
	int		min;
	int		pos;

	aux = *stack;
	min = aux->index;
	pos = 1;
	while (aux)
	{
		if (aux->index < min)
			min = aux->index;
		aux = aux->next;
	}
	aux = *stack;
	while (aux->index != min)
	{
		aux = aux->next;
		pos++;
	}
	return (pos);
}

//Compares the ids and swap the nodes if necessary.
void	ft_sort_two(t_stack **stack)
{
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

//Makes the biggest one the last of the stack and then we compare the
//two other ids to swap the nodes if necessary.
void	ft_sort_three(t_stack **stack)
{
	int		max;
	t_stack	*aux;

	aux = *stack;
	max = ft_find_max_id(&aux);
	if ((*stack)->index == max)
		ra(stack);
	else if ((*stack)->next->index == max)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

//Looks for the smallest number and puts it first to send it to b.
//Then we sort them as if it was a three stack and push the other back.
void	ft_sort_four(t_stack **a, t_stack **b)
{
	int	pos;

	pos = ft_min_num_pos(a);
	if (pos == 2)
		ra(a);
	else if (pos == 3)
	{
		ra(a);
		ra(a);
	}
	else if (pos == 4)
		rra(a);
	pb(a, b);
	ft_sort_three(a);
	pa(a, b);
}

//Looks for the smallest number and puts it first to send it to b.
//Then we sort them as if it was a four stack and push the other back.
void	ft_sort_five(t_stack **a, t_stack **b)
{
	int	pos;

	pos = ft_min_num_pos(a);
	if (pos == 2)
		ra(a);
	else if (pos == 3)
	{
		ra(a);
		ra(a);
	}
	else if (pos == 4)
	{
		rra(a);
		rra(a);
	}
	else if (pos == 5)
		rra(a);
	pb(a, b);
	ft_sort_four(a, b);
	pa(a, b);
}
