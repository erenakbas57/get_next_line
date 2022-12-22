/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makbas <makbas@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:01:53 by makbas            #+#    #+#             */
/*   Updated: 2022/11/23 15:38:01 by makbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*read_line(char *str, int fd);
char	*read_first_line(char *str);
char	*next_read(char *str);

size_t	ft_strlen(const char *s);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *str, char *buff);
#endif
