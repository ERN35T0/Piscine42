/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:12:30 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/28 20:10:51 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	while (str[i] != '\0')
		write(1, "Voldemor", 9);
	i++;
}

int	main(void)
{
	write (ft_putstr_non_printable);
	return (0);
}
