/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:52:08 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/23 16:36:16 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Appends the first num characters of source to destination,
plus a terminating null-character.
If the length of the C string in source is less than num,
only the content up to the terminating null-character is copied.
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}
