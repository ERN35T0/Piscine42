/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06main.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:36:11 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/21 18:05:24 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int	main(void)

{
	char	str[] = "Alimoche";

	int count = ft_strlen(str);

	printf("%d\n", count);
}
