/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:09:52 by uherrero          #+#    #+#             */
/*   Updated: 2022/02/27 16:16:34 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long		nbr_of_neg;
	long		returned;

	returned = 0;
	nbr_of_neg = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*(str++) == '-')
			nbr_of_neg *= -1;
	while (ft_isdigit(*str))
		returned = (returned * 10) + (*(str++) - '0');
	return (returned * nbr_of_neg);
}
