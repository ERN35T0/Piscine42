/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 09:29:07 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/26 20:03:05 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strcpy function copies the string pointed by source 
(including the null character) to the destination.
The strcpy() function also returns the copied string
*/
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	source[] = "primer string.";
	char	destination[] = "string número dos";
	char	*dest;

	printf("Before\n\tsrc: %s\n\tdes: %s\n", source, destination);
	dest = ft_strcpy(destination, source);
	printf("After\n\tsrc: %s\n\tdes: %s\n", source, dest);
	return (0);
}
*/
