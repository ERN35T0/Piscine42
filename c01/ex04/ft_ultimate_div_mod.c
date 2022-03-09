/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebaquero <ebaquero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:01:38 by ebaquero          #+#    #+#             */
/*   Updated: 2022/02/21 19:11:56 by ebaquero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_ultimate_div_mod(int *a, int *b)
{
	int	firstresult;
	int	secondresult;

	firstresult = *a / *b;
	secondresult = *a % *b;
	*a = firstresult;
	*b = secondresult;
}*/
void	ft_ultimate_div_mod2(int *a, int *b)
{
	int	firstresult;
	int	secondresult;

	printf("%d\n", *a);
	*a = *a / *b;
	printf("%d\n", *a);
	//secondresult = *a % *b;c
	//*a = firstresult;
	//*b = secondresult;
}
int	main(void)
{
	int a = 8;
	int b = 2;
	ft_ultimate_div_mod2(&a, &b);
	return (0);
}
