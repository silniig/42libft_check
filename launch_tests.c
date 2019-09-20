/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:03:15 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 04:43:01 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

int		launch_tests(void)
{
	int	result;

	result = 0;
	if (test_memset() != 0)
		result += 1;
	if (test_memcpy() != 0)
		result += 2;
	return (result);
}
