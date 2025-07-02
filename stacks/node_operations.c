/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:21:45 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 19:42:12 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Counts how many nodes there are in the stack
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

//Go through all nodes until the last one
t_stack	*ft_last_node(t_stack *list)
{
	t_stack	*new;

	new = list;
	while (new != NULL && new->next != NULL)
		new = new->next;
	return (new);
}

//Adds a new node at the end of the stack
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

//Instantiates with a default value a node
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
