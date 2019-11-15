/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 04:21:26 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 04:42:00 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testlibft.h"

static int	small_test_memcpy(char *mem, char *other)
{
	return (0);
}

int			test_memcpy(void)
{
	unsigned char	*mem;
	unsigned char	*other;
	int				status;

	status = 0;
	mem = (unsigned char *)malloc(SMALL_BUFFER_SIZE);
	other = (unsigned char *)malloc(SMALL_BUFFER_SIZE);
	memset(mem, 3, 100);
	memset(mem + 100, 7, SMALL_BUFFER_SIZE - 100);
	memcpy(other, mem, SMALL_BUFFER_SIZE);
	status += small_test_memcpy(mem, other);
	free(mem);
	free(other);
	return (status);
}
