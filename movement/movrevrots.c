/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movrevrots.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:49:44 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 12:35:54 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Desplaza hacia abajo todos los elementos del stack a una
//posición, de forma que el último elemento se convierte en el primero.

//save the last node to put it first at the end of the program, we make the
//first node of the list be after the saved one, and iterate to make the
//second to last node have the next one NULL.
void	rra(t_stack **a)
{
	t_stack	*aux;
	t_stack	*second_to_last;

	if (!*a || !(*a)->next)
		return;
	aux = ft_last_node(*a);
	second_to_last = *a;
	while (second_to_last->next != aux)
		second_to_last = second_to_last->next;
	second_to_last->next = NULL;
	aux->next = *a;
	*a = aux;

	ft_last_node(*a)->next = aux;
	ft_printf("rra\n");
}

//Desplaza hacia abajo todos los elementos del stack b una
//posición, de forma que el último elemento se convierte en el primero.
void	rrb(t_stack **b)
{
	t_stack	*aux;
	t_stack	*second_to_last;

	if (!*b || !(*b)->next)
		return;
	aux = ft_last_node(*b);
	second_to_last = *b;
	while (second_to_last->next != aux)
		second_to_last = second_to_last->next;
	second_to_last->next = NULL;
	aux->next = *b;
	*b = aux;

	ft_last_node(*b)->next = aux;
	ft_printf("rrb\n");
}

//rra y rrb at the same time.
void	rrr(t_stack **a, t_stack **b)
{
	t_stack	*aux;
	t_stack	*second_to_last;

	if (!*a || !(*a)->next || !*b || !(*b)->next)
		return;
	aux = ft_last_node(*a);
	second_to_last = *a;
	while (second_to_last->next != aux)
		second_to_last = second_to_last->next;
	second_to_last->next = NULL;
	aux->next = *a;
	*a = aux;
	aux = ft_last_node(*b);
	second_to_last = *b;
	while (second_to_last->next != aux)
		second_to_last = second_to_last->next;
	second_to_last->next = NULL;
	aux->next = *b;
	*b = aux;
	ft_printf("rrr\n");
}
