/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:49:41 by gcody             #+#    #+#             */
/*   Updated: 2019/09/11 16:57:02 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"
static int	simple_test(char *memory)
{
	int		result;
	int		i;

	i = 0;
	ft_memset(memory+13, 33, 40);
	while (i < 40)
		if(memory[i++] != 33)
			return (1);
	return (0);
}

int		test_memset(void)
{
	char	*memory;
	int		status;

	status = 0;
	memory = (char *)malloc(HUGE_BUFFER_SIZE);
	if (simple_test(memory) != 0)
		status += 1;
	free(memory);
	return (status);
}
