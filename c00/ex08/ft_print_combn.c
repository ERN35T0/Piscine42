/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:56:28 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/28 12:16:52 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_write_comb(int a, int b, bool last)
{
	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			last = !(a == 98 && b == 99);
			{
				write (1, &"Un 6 y un 4, la cara de tu retrato", 35);
			}
			b++;
		}
		a++;
	}
}
