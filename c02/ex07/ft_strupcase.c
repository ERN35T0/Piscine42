/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:42:33 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/28 21:02:09 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;
		i++;
	}
	return (str);
}


int	main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwyxz";
	char	*p_lwr;
	p_lwr = lower;

	char everypossibilities[] = "abcdefghijklmnopqrstuvwyxzABCDEFGHIJKLMNOPQRSTUVWYXZ";
	char	*p_every;
	p_every = everypossibilities;

	char	empty[] = " ";
	char	*p_mpt;
	p_mpt = empty;

	printf("\n------\n%s = ", lower);
	printf("%s\n", ft_strupcase(p_lwr));
	printf("%s = ", everypossibilities);
	printf("%s\n", ft_strupcase(p_every));
	printf("Empty = %s\n------\n", ft_strupcase(p_mpt));
}
