/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 15:21:45 by manuemar          #+#    #+#             */
/*   Updated: 2025/06/29 15:35:01 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack *ft_last_node(t_stack *lst)
{
	t_stack	*new;

	new = lst;
	while (new != NULL && new->next != NULL)
		new = new->next;
	return (new);
}

void	ft_add_back(t_stack **lst, t_stack *new)
{
	if (new)
	{
		if (!*lst)
		{
			*lst = new;
		}
		else
			ft_last_node(*lst)->next = new;
	}
}

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
