/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:33:17 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/24 12:27:24 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)

{
	char	src[] = "me cago en la leche";
	char	dest[] = "mi gozo en un pozo";
	unsigned	int n;

	n = 7;
	printf("Before\n\tsrc: %s\n\tdes: %s\n", src, dest);
	ft_strncpy(dest, src, n);
	printf("After\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}
*/