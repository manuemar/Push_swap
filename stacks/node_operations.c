/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:21:45 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/01 20:36:24 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Contar cuantos nodos hay en el stack A
int	ft_count_nodes(t_stack *list)
{
	t_stack	*aux;
	int		count;

	count = 0;
	aux = list;
	while (aux != NULL)
	{
		count++;
		aux = aux->next;
	}
	return (count);
}

//Recorrer todos los nodos hasta el ultimo
t_stack *ft_last_node(t_stack *list)
{
	t_stack	*new;

	new = list;
	while (new != NULL && new->next != NULL)
		new = new->next;
	return (new);
}

//Añadir un nuevo nodo al final del stack
void	ft_add_back(t_stack **list, t_stack *new)
{
	if (new)
	{
		if (!*list)
		{
			*list = new;
		}
		else
			ft_last_node(*list)->next = new;
	}
}

//Instanciar con un valor cada nodo
t_stack	*ft_new_node(int value)
{
	t_stack	*newnode;

	newnode = malloc(sizeof(t_stack));
	if (!newnode)
		return (NULL);
	newnode->value = value;
	newnode->index = 0;
	newnode->next = NULL;
	return (newnode);
}
