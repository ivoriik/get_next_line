/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbespalk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 12:58:02 by vbespalk          #+#    #+#             */
/*   Updated: 2018/04/23 12:58:07 by vbespalk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

# define BUFF_SIZE 1024

typedef	struct		s_fd
{
	unsigned int	fd;
	unsigned int	no_read: 1;
	size_t			flag;
	t_list			*buf;
	struct s_fd		*next;
}					t_fd;

int					get_next_line(const int fd, char **line);

#endif
