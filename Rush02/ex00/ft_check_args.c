/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:15:32 by ulherrer          #+#    #+#             */
/*   Updated: 2022/02/27 21:21:17 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_check_line(char *line)
{
	int		a;
	char	*aux;

	aux = ft_strtrim(line, " ");
	free(line);
	a = 0;
	while (ft_isdigit(aux[a]))
		a++;
	while (ft_isspace(aux[a]))
		a++;
	if (':' != aux[a])
		return (0);
	while (ft_isspace(aux[a]))
		a++;
	while (ft_isprint(aux[a]))
		a++;
	if ('\0' == aux[a])
		return (1);
	return (0);
}

int	ft_check_correct(int fd)
{
	char	**line;
	int		flag;

	flag = 1;
	line = (char **)ft_calloc(1, sizeof(char *));
	while (1 == flag)
	{
		flag = get_next_line(fd, line);
		if ('\0' == line[0][0])
			continue ;
		if (!ft_check_line(line[0]))
		{
			free(line);
			return (0);
		}
	}
	free(line);
	return (1);
}

int	ft_check_dic(char *dic)
{
	int	fd;

	fd = open(dic, O_RDONLY);
	if (fd <= 0)
		return (0);
	if (!ft_check_correct(fd))
		return (0);
	return (fd);
}

int	ft_check_num(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

int	ft_check_args(int argc, char **argv)
{
	if (2 > argc || 3 < argc)
		return (0);
	if (2 == argc)
		return (ft_check_num(argv[1]));
	if (3 == argc)
		if (!ft_check_num(argv[2]) || !ft_check_dic(argv[1]))
			return (0);
	return (1);
}
