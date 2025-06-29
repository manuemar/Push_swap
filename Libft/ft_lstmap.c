/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:20:16 by manuemar          #+#    #+#             */
/*   Updated: 2024/01/30 18:36:10 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_lstclear_new(t_list **new, t_list **val, void (*del)(void *))
{
	*val = (*new)->next;
	del((*new)->content);
	free(*new);
	*new = *val;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*val;
	void	*content;

	if (!lst || !f || !del)
		return (0);
	new = NULL;
	while (lst)
	{
		content = f(lst->content);
		val = ft_lstnew(content);
		if (!val)
		{
			del(content);
			while (new)
				ft_lstclear_new(&new, &val, del);
			lst = NULL;
			return (0);
		}
		ft_lstadd_back(&new, val);
		lst = lst->next;
	}
	return (new);
}
