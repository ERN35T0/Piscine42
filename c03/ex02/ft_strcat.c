/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 13:40:36 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/24 11:49:54 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Appends a copy of the source string to the destination string. 
The terminating null character in destination is overwritten by 
the first character of source, and a null-character is included at the
 end of the new string formed by the concatenation of both in destination.
 */
char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
	i1++;
	while (src[i2] != '\0')
	{
		dest[i1] = dest [i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}
