/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 18:34:08 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 12:39:40 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Cleans node by node stack A
void	ft_clear_stack(t_stack **list)
{
	t_stack	*aux;

	while (*list)
	{
		aux = (*list)->next;
		free(*list);
		*list = aux;
	}
}

//Create stacks by adding the nodes to it
t_stack	*ft_stack_build(char **args)
{
	t_stack	*stack;
	t_stack	*node;
	int		i;
	int		value;

	i = 0;
	stack = NULL;
	while (args[i])
	{
		value = ft_atoi(args[i]);
		node = ft_new_node(value);
		ft_add_back(&stack, node);
		i++;
	}
	return (stack);
}
