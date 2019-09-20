/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:49:41 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 04:15:39 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	memset_simple_test(char *memory)
{
	void	*user;
	void	*sys;
	size_t	i;

	user = ft_memset(memory + OFFSET, 200, SMALL_BUFFER_SIZE);
	i = OFFSET;
	while (i < OFFSET + SMALL_BUFFER_SIZE)
		if ((unsigned char)memory[i++] != 200)
			return (1);
	sys = memset(memory + OFFSET, 200, SMALL_BUFFER_SIZE);
	if (user != sys)
		return (2);
	return (0);
}

int			test_memset(void)
{
	char	*memory;
	int		status;

	status = 0;
	memory = (char *)malloc(HUGE_BUFFER_SIZE);
	status += memset_simple_test(memory);
	free (memory);
	return (status);
}
