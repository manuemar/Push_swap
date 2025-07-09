/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:34:27 by manuemar          #+#    #+#             */
/*   Updated: 2025/07/08 22:37:44 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>

# include "Libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	struct s_stack	*next;
}	t_stack;

//MAIN FUNCTIONS
int		main(int argc, char **argv);
int		ft_validate_errors(int argc, char **argv, char **args);

//PARSING
char	**ft_get_clean_args(int argc, char **argv);
char	**ft_split_several_args(int argc, char **argv);
char	**ft_split_single_arg(char *argv);

//VALIDATIONS
int		ft_has_duplicates(char **args);
int		ft_validate_space(int argc, char **argv);

//STACKS
void	ft_add_back(t_stack **lst, t_stack *new);
void	ft_assign_id(t_stack *node);
void	ft_clear_stack(t_stack **list);
int		ft_count_nodes(t_stack *list);
int		ft_find_max_id(t_stack **stack);
t_stack	*ft_last_node(t_stack *lst);
t_stack	*ft_new_node(int value);
t_stack	*ft_stack_build(char **args);

//MOVEMENTS
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

//SORTING
int		ft_is_alredy_sorted(t_stack *stack);
int		ft_min_num_pos(t_stack **stack);
void	ft_sort_five(t_stack **a, t_stack **b);
void	ft_sort_four(t_stack **a, t_stack **b);
void	ft_sort_three(t_stack **stack);
void	ft_sort_two(t_stack **stack);
void	ft_sorting_cases(t_stack **a, t_stack **b, int size);

#endif
