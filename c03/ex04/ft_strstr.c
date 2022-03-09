/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:01:38 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/23 19:55:07 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strstr function searches within
 the string pointed to by s1 for the string pointed to by s2. It 
 returns a pointer to the first occurrence in s1 of s2.
 */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 1;
			while (to_find[i] && str[i] == to_find[i])
				i++;
			if (!to_find[i])
				return (str);
		}
		str++;
	}
	return (0);
}
