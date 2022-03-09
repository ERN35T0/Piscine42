/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:44:26 by ebaquero          #+#    #+#             */
/*   Updated: 2022/03/03 16:46:59 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	i = 1;
	len = 0;
	if (1 < argc)
	{
		while (argc > i)
		{
			len = 0;
			while ('\0' != argv[i][len])
			{
				write(1, &argv[i][len], 1);
				len++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
