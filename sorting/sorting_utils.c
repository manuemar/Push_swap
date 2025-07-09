/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:32:04 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/09 09:07:06 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Counts how many bits the biggest number has.
int	ft_find_max_bits(t_stack **stack)
{
	int		bits;
	int		max;
	t_stack	*aux;

	bits = 0;
	max = 0;
	aux = *stack;
	while (aux)
	{
		if (aux->index > max)
			max = aux->index;
		aux = aux->next;
	}
	while (max)
	{
		max = max / 2;
		bits++;
	}
	return (bits);
}

//Sorts the index of the numbers by bits.
void	ft_sort_radix(int size, t_stack **a, t_stack **b)
{
	int	i;
	int	bitpos;
	int	maxbits;

	bitpos = 0;
	maxbits = ft_find_max_bits(a);
	while (bitpos < maxbits)
	{
		i = 0;
		while (i < size)
		{
			if ((*a)->index >> bitpos & 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		while (*b)
			pa(a, b);
		bitpos++;
	}
}

//Checks if stack is sorted by index. If not, return 0.
int	ft_is_alredy_sorted(t_stack *stack)
{
	t_stack	*aux;

	aux = stack;
	while (aux->next)
	{
		if (aux->index > aux->next->index)
			return (0);
		aux = aux->next;
	}
	return (1);
}

//Assign the order and choose which method to sort the numbers
void	ft_sorting_cases(t_stack **a, t_stack **b, int size)
{
	ft_assign_id(*a);
	if (!ft_is_alredy_sorted(*a))
	{
		if (size == 2)
			ft_sort_two(a);
		else if (size == 3)
			ft_sort_three(a);
		else if (size == 4)
			ft_sort_four(a, b);
		else if (size == 5)
			ft_sort_five(a, b);
		else
			ft_sort_radix(size, a, b);
	}
}
