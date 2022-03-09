/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:38:49 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/28 21:06:31 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The strlcpy() function copies up to size - 1 characters from 
//the NUL-terminated string src to dst, NUL-terminating the result.
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (1);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (1);
}

int	main(void)
{
	char	src[] = "Aitor Mentalizate de una vez";
	char	dest[] = "aquí sustituimos";
	unsigned int	i;

	i = 10;
	printf("Before\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, i);
	i = ft_strlcpy(dest, src, i);
	printf("After\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, i);
	printf("\n");
	i = strlcpy(dest, src, i);
	printf("After\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, i);
	return (0);
}

