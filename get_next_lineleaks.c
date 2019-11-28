/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:13:48 by ychair            #+#    #+#             */
/*   Updated: 2019/11/28 14:22:56 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int 		letter;
	char 		buff[BUFFER_SIZE + 1];
	static	 char 	*buffline[OPEN_MAX];
	char 		*tmp;
	int		i;
	char		*link;


	i = 0;
	if(fd < 1 || line == NULL || fd > OPEN_MAX)
		return(-1);
	while((letter = read(fd,buff,BUFFER_SIZE)) > 0)
	{
		buff[letter] = '\0';
		if(buffline[fd] == NULL)
			buffline[fd] = ft_strdup(buff);
		else		
		{
			if(!(tmp = ft_strjoin(buffline[fd],buff)))
				return(-1);
			free(buffline[fd]);
			buffline[fd] = 0;
			buffline[fd] = tmp;
		}
	}
	if (letter < 0)
		return (-1);
	while(buffline[fd][i] && buffline[fd][i] != '\n')
		i++;
	if(!(link = (char *)malloc(sizeof(char) * i + 1)))
		return(-1);
	i = 0;
	while(buffline[fd][i] && buffline[fd][i] != '\n')
	{
		link[i] = buffline[fd][i];
		i++;
	}
	//if (letter == 0)
	//	return(0);
	link[i] = '\0';
	*line = link; 
	if((buffline[fd] = ft_strchr(buffline[fd],'\n')))
		return(1);
	return (0);
}
