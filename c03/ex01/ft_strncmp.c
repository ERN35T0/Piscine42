/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:37:58 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/25 14:35:35 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
This function starts comparing the first character of each string
If they are equal to each other, it continues with the following
pairs until the characters differ, until a terminating null-character is reached,
or until num characters match in both strings, whichever happens first.
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
