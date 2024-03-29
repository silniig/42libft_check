/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:38:14 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 04:19:59 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

int		main(void)
{
	if (launch_tests() == 0)
		ft_putendl("Everything worked fine");
	else
		ft_putstr("There's a problem with your libft\n");
	return (0);
}
