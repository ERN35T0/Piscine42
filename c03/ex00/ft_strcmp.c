/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:16:44 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/23 20:08:27 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The function compares the character codes of the two strings pointed
to by byte function arguments. The comparison continues 
until the meeting of the first different characters or until all 
characters in the strings have been tested.
s1 == s2 0 is returned
if s1 > s2 positive is returned
if s2 > s1 negative is returned


#include <string.h>
#include <stdio.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	char s1[5] = "Salut";
	char s2[6] = "Coucou";
	int	res1 = ft_strcmp(&s1, &s2);
	
	int res2 = strcmp("Coucou", "Salut");
	printf("%d\n", res1);
	printf("%d", res2);
	return (0);
}
*/
