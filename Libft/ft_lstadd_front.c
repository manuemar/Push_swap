/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:13:48 by manuemar          #+#    #+#             */
/*   Updated: 2024/01/29 19:23:01 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

//list es un nodo dentro de la lista, new es el que hay que meter antes
//haces que lst vaya desppues de new y luego haces que new ocupe el primer
//lugar, que es el de lst
