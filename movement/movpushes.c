/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movpushes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:48:43 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/09 08:58:54 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Take the first element at the top of b and put it at the top of a.
//Do nothing if b is empty.
//Convert an aux into b with the next one being the first one in a,
// b into the next one in b, and then a into the aux
void	pa(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	if (!*b)
		return ;
	aux = *b;
	*b = aux->next;
	aux->next = *a;
	*a = aux;
	ft_printf("pa\n");
}

//Take the first element at the top of a and put it at the top of b.
//Do nothing if a is empty.
void	pb(t_stack **a, t_stack **b)
{
	t_stack	*aux;
	// t_stack *new_a;

	if (!*a)
		return ;
	aux = *a;
	*a = aux->next;
	aux->next = *b;
	*b = aux;
	ft_printf("pb\n");
}
