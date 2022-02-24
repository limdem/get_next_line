/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 02:24:01 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/07 02:26:40 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

char	*get_next_line(int fd);
int		ft_strlen(const char *s);
int		is_current_line(char *str, int reader);
char	*to_free(char *pt);
void	*ft_memmove(void *dst, const void *src, int len);

#endif
