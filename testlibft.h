/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcody <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:45:20 by gcody             #+#    #+#             */
/*   Updated: 2019/09/20 04:22:08 by gcody            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTLIBFT_H
# define TESTLIBFT_H
# define HUGE_BUFFER_SIZE 1048576
# define SMALL_BUFFER_SIZE 257
# define OFFSET 132954

# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

int		test_memset(void);
int		test_memcpy(void);
int		launch_tests(void);

#endif
