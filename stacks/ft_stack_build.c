/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_build.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 18:34:08 by manuemar          #+#    #+#             */
/*   Updated: 2025/06/29 15:48:49 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Crear stacks
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
		node = ft_new_node(value); //Hacer
		ft_add_back(&stack, node); //hacer
		i++;
	}
	return (stack);
}
