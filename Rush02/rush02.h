/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ulherrer <ulherrer@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:57:14 by ulherrer          #+#    #+#             */
/*   Updated: 2022/02/27 23:27:51 by ulherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <fcntl.h>
# include "libft/libft.h"
# include "libft/get_next_line.h"

typedef struct s_content
{
	char			*num;
	char			*key;
}				t_content;

int	ft_check_args(int argc, char **argv);
int	ft_save_dic(char *dic, t_list *diccionario);

#endif
