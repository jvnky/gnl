/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychair <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 09:43:33 by ychair            #+#    #+#             */
/*   Updated: 2019/11/29 13:15:07 by ychair           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# define OPEN_MAX 256
# include <stdlib.h>
# include <unistd.h>
# include <sys/uio.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_cpylink(char **buffline, int fd);
#endif
