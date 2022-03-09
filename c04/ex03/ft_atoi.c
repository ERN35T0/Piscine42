/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:35:48 by ebaquero          #+#    #+#             */
/*   Updated: 2022/03/03 18:45:02 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sign(char c)
{
	if ('-' == c)
		return (-1);
	if ('+' == c)
		return (+1);
	else
		return (0);
}

int	ft_space(char c)
{
	if (' ' == c || '\n' == c || '\r' == c
		|| '\f' == c || '\v' == c || '\t' == c)
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	signf;
	int	result;

	signf = 1;
	result = 0;
	while (ft_space(*str) == 1)
		str++;
	while (ft_sign(*str) == 1 || ft_sign(*str) == -1)
	{
		if (ft_sign(*str) == -1)
			signf *= ft_sign(*str);
		str++;
	}
	while (*str != '\0')
	{
		if ('0' <= *str && '9' >= *str)
		{
			result *= 10;
			result += ((int)(*str - '0'));
		}
		else
			break ;
		str++;
	}
	return (signf * result);
}
// tengo que sacar ft_space del while sign para que corte
int	main(void)
{
	char str[] = "-a-543*-4a";
	int	result = ft_atoi (str);
	printf("%d", result);
	return (0);
}
