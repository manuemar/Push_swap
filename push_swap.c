/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:37:35 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/02 20:31:28 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//checks no numbers are duplicated and all of the args are valid numbers
int	ft_validate_errors(int argc, char **argv, char **args)
{
	int	i;

	i = 0;
	if (!args)
		return (ft_printf("Error: Invalid arguments.\n"), 1);
	if (ft_validate_space(argc, argv))
	{
		ft_free_split(args);
		return (ft_printf("Error.\n"), 1);
	}
	while (args[i])
	{
		if (!ft_issignednum(args[i]) || ft_isintrange(args[i]))
		{
			ft_free_split(args);
			return (ft_printf("Error: Number too big or not recognized.\n"), 1);
		}
		i++;
	}
	if (ft_has_duplicates(args))
	{
		ft_free_split(args);
		return (ft_printf("Error: There are duplicated numbers.\n"), 1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		size;
	char	**args;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (1);
	args = ft_get_clean_args(argc, argv);
	if (ft_validate_errors(argc, argv, args) == 1)
		return (1);
	stack_a = ft_stack_build(args);
	stack_b = NULL;
	size = ft_count_nodes(stack_a);
	if (size == 1)
	{
		ft_clear_stack(&stack_a);
		ft_free_split(args);
		return (ft_printf("Error. We need more than 1 number."), 1);
	}
	ft_sorting_cases(&stack_a, &stack_b, size);
	ft_clear_stack(&stack_a);
	ft_free_split(args);
	return (0);
}
