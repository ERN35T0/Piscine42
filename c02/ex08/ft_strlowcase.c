/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:00:57 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/28 21:42:03 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char upper[] = "ABCDEFGHIJKLMNOPQRSTYZ";
	char	*p_upper;
	p_upper = upper;
	char everypossibilities[] = "abcdefghijlmnopqrstuvwyxzABCDEFGHIJKLMNOPQRSTUVWYXZ";
	char	*p_every;
	p_every = everypossibilities;

	char	empty[] = " ";
	char	*p_mpt;
	p_mpt = empty;

	printf("\n------\n%s = ", upper);
	printf("%s\n", ft_strlowcase(p_upper));
	printf("%s = ", everypossibilities);
	printf("%s\n", ft_strlowcase(p_every));
	printf("Empty = %s\n------\n", ft_strlowcase(p_mpt));
}