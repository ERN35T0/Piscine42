/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:55:32 by ebaquero          #+#    #+#             */
/*   Updated: 2022/03/01 17:45:32 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)

{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long int	nb;
	int			i;
	char		c[10];

	nb = nbr;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
		i = 0;
	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}

int	main(void)
{
	int	a;

	a = 8975476;
	ft_putnbr(a);
	return (0);
}
