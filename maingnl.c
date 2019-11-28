/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:50:08 by ychair            #+#    #+#             */
/*   Updated: 2019/11/28 12:12:21 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int   main(int ac, char **av)
{
	char  *line;
	int   fd1;
	int   fd2;
	int   ret;
	
	ac = 0;
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	while ((ret = get_next_line(fd1, &line)) > 0)
	{
		printf("ret : %d FD1 = %s\n", ret, line);
	}
	while ((ret = get_next_line(fd2, &line)) > 0)
	{
		printf("ret : %d FD2 = %s\n", ret, line);
	} 
	//system("leaks a.out");	
return (0);
}
