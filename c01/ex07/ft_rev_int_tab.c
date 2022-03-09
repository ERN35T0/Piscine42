/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:06:29 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/21 19:18:29 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (1 < size / 2)
	{
		temp = tab[i];
		tab[1] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*int main(void)
{
	int a[6]= {1, 2, 3, 4, 5, 6};
	int size;

	size = 6;
	ft_rev_int_tab(a, size);
	for(int i = 0; i < size; i++)
	{
	printf("%d", a[i]);
	}
/*}
