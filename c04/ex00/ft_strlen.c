/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 13:23:02 by ebaquero          #+#    #+#             */
/*   Updated: 2022/03/01 16:36:37 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char str[] = "The luck favors only the prepared mind. Isaac Asimov";
	int	result = ft_strlen(str);
	printf("The length of the string is %d.\n", result);
	return (0);
}
*/
