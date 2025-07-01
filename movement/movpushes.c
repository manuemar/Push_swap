/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movpushes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:48:43 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/01 21:15:37 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Toma el primer elemento del stack b y lo pone el primero en el stack a.
//No hace nada si b está vacío.

//DARLE UNA VUELTA PARA COMPROBAR QUE TIENE SENTIDO
void	pa(t_stack **a, t_stack **b)
{
	t_stack *aux;

	if (!*b)
		return;
	aux = *b;
	*b = (*b)->next;
	aux->next = *a;
	*a = aux;
	ft_printf("pa\n");
}
