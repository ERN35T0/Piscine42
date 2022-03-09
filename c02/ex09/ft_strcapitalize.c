/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:13:16 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/24 14:23:39 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 97 && str[i] <= 122)
		{	
			if ((str[i - 1] < 65 || str[i - 1] > 90))
			{
				if ((str[i - 1] < 97 || str[i - 1] > 122))
				{
					if (str[i - 1] > 57 || str[i - 1] < 48)
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[100] = "lOS 2videos de-el de la *perilla";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
*/
