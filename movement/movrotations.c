/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movrotations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:49:13 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 19:43:08 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Shift up all elements of stack a by 1.
//The first element becomes the last one.
void	ra(t_stack **a)
{
	t_stack	*aux;

	if (!*a || !(*a)->next)
		return ;
	aux = *a;
	*a = (*a)->next;
	ft_last_node(*a)->next = aux;
	aux->next = NULL;
	ft_printf("ra\n");
}

//Shift up all elements of stack b by 1.
//The first element becomes the last one.
void	rb(t_stack **b)
{
	t_stack	*aux;

	if (!*b || !(*b)->next)
		return ;
	aux = *b;
	*b = (*b)->next;
	ft_last_node(*b)->next = aux;
	aux->next = NULL;
	ft_printf("rb\n");
}

//ra and rb at the same time.
void	rr(t_stack **a, t_stack **b)
{
	t_stack	*aux;

	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return ;
	aux = *a;
	*a = (*a)->next;
	ft_last_node(*a)->next = aux;
	aux->next = NULL;
	aux = *b;
	*b = (*b)->next;
	ft_last_node(*b)->next = aux;
	aux->next = NULL;
	ft_printf("rr\n");
}
