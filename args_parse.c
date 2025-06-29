/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuemar <manuemar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:59:03 by manuemar          #+#    #+#             */
/*   Updated: 2025/06/28 10:22:14 by manuemar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//separamos los argumentos por espacios y los juntamos, liberandolo si sale
//mal uno a uno
char	**ft_split_single_arg(char *argv)
{
	char	**args;

	args = ft_split(argv, ' ');
	if (!args || !args[0])
	{
		if (args)
			ft_free_split(args);
		return (NULL);
	}
	return (args);
}

//Convertimos todos los argumentos en uno solo y repetimos el split
//pero liberando la memoria del puntero con todos lo argumentos
char	**ft_split_several_args(int argc, char **argv)
{
	char	**args;
	char	*joined;
	int		i;

	joined = ft_strdup(argv[1]);
	i = 2;
	while (i < argc)
	{
		joined = ft_strjoin_free(joined, " ");
		joined = ft_strjoin_free(joined, argv[i]);
		i++;
	}
	args = ft_split(argv, ' ');
	if (!args || !args[0])
	{
		if (args)
			ft_free_split(args);
		return (free(joined), NULL);
	}
	return (free(joined), args);
}

char	**ft_get_clean_args(int argc, char **argv)
{
	if (argc == 2)
		return (ft_split_single_arg(argv[1]));
	else if (argc > 2)
		return (ft_split_several_args(argc - 1, argv));
	return (NULL);
}
