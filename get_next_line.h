/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillase <nvillase@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:30:50 by nvillase          #+#    #+#             */
/*   Updated: 2023/03/17 16:00:39 by nvillase         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <strings.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42

char	*get_next_line(int fd);

#endif