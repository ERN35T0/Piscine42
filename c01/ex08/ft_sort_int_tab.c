/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:58:20 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/21 16:37:16 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	repl;

	repl = *a;
	*a = *b;
	*b = repl;
}

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		if (tab[i] > tab[j])
		{
			ft_swap(&tab[i], &tab[j]);
			i = 0;
		}
		else
		{
		i++;
		}
	}
}
