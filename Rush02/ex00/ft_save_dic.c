/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_dic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 22:24:58 by ulherrer          #+#    #+#             */
/*   Updated: 2022/02/27 23:27:33 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_index(char *aux)
{
	int	n;

	n = 0;
	while (ft_isdigit(aux[n]))
		n++;
	while (ft_isspace(aux[n]))
		n++;
	if (':' == aux[n])
		n++;
	while (ft_isspace(aux[n]))
		n++;
	return (n);
}

char	*ft_save_key(char *aux)
{
	int		n;
	int		a;
	char	*save;

	n = ft_index(aux);
	a = n;
	while (ft_isprint(aux[n]))
		n++;
	save = (char *)ft_calloc(1 + n - a, sizeof(char));
	n = 0;
	while (ft_isprint(aux[a]))
	{
		save[n] = aux[a];
		a++;
		n++;
	}
	save[n] = '\0';
	return (save);
}

char	*ft_save_num(char *aux)
{
	int		n;
	char	*save;

	n = 0;
	while (ft_isdigit(aux[n]))
		n++;
	save = (char *)ft_calloc(n + 1, sizeof(char));
	n = 0;
	while (ft_isdigit(aux[n]))
	{
		save[n] = aux[n];
		n++;
	}
	save[n] = '\0';
	return (save);
}

int	ft_save_line(char *line, t_list **diccionario)
{
	char		*aux;
	t_content	*content;
	t_list		*lst_aux;

	aux = ft_strtrim(line, " ");
	free(line);
	content = (t_content *)ft_calloc(1, sizeof(t_content));
	content->num = ft_save_num(aux);
	content->key = ft_save_key(aux);
	lst_aux = ft_lstnew(content);
	ft_lstadd_back(diccionario, lst_aux);
	return (1);
}

int	ft_save_dic(char *dic, t_list *diccionario)
{
	int		fd;
	int		flag;
	char	**line;

	flag = 1;
	fd = open(dic, O_RDONLY);
	if (fd <= 0)
		return (0);
	line = (char **)ft_calloc(1, sizeof(char *));
	while (1 == flag)
	{
		flag = get_next_line(fd, line);
		if ('\0' == line[0][0])
			continue ;
		if (!ft_save_line(line[0], &diccionario))
		{
			free(line);
			return (0);
		}
	}
	free(line);
	return (1);
}
