/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:18:21 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/21 18:05:28 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);
int	main(void)
{
	int a[6] = {-8, 7, -2, 1, 4, 6};
	int size = 6;

	ft_sort_int_tab(a, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d", a[i]);
	}	
}
