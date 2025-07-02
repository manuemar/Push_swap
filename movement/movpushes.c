/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movpushes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:48:43 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 10:56:51 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Toma el primer elemento del stack b y lo pone el primero en el stack a.
//No hace nada si b está vacío.

//Convert an aux into b with the next one being the first one in a,
// b into the next one in b, and then a into the aux
void	pa(t_stack **a, t_stack **b)
{
	t_stack *aux;

	if (!*b)
		return;
	aux = *b;
	aux->next = *a;
	*b = (*b)->next;
	*a = aux;
	ft_printf("pa\n");
}

//Toma el primer elemento del stack a y lo pone el primero en el stack b.
//No hace nada si a está vacío.
void	pb(t_stack **a, t_stack **b)
{
	t_stack *aux;

	if (!*a)
		return;
	aux = *a;
	aux->next = *b;
	*a = (*a)->next;
	*b = aux;
	ft_printf("pb\n");
}
