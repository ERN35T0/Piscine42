/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:57:06 by ulherrer          #+#    #+#             */
/*   Updated: 2022/02/27 23:28:16 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"
#include <stdio.h>

int	ft_is_extern(int argc, char **argv, t_list *diccionario)
{
	int	aux;

	if (3 == argc)
		aux = ft_save_dic(argv[1], diccionario);
	else
		aux = ft_save_dic("dictionary/numbers.dict", diccionario);
	return (aux);
}

int	ft_talk(char *num, t_list diccionario)
{
	t_content	*content;
	int			n;

	content = diccionario.content;
	n = ft_strlen(num);
	while (diccionario.next != NULL)
	{
		diccionario = *diccionario.next;
		content = diccionario.content;
		if (!ft_strncmp(num, content->num, n))
		{
			write (STDOUT_FILENO, content->key, ft_strlen(content->key));
			return (1);
		}
	}
	write(STDERR_FILENO, "Dict Error\n", 11);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	diccionario;
	char	*num;

	if (!ft_check_args(argc, argv))
	{
		write(STDERR_FILENO, "Dict Error\n", 11);
		return (-1);
	}
	if (!ft_is_extern(argc, argv, &diccionario))
	{
		write(STDERR_FILENO, "Dict Error\n", 11);
		return (-1);
	}
	if (3 == argc)
		num = ft_strdup(argv[2]);
	else
		num = ft_strdup(argv[1]);
	ft_talk(num, diccionario);
	return (42);
}
