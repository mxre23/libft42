/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 04:09:07 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/11 05:08:41 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		while (i < len)
			write(fd, &s[i++], 1);
	}
}
/*
int main()
{
	char	*str = "Scooby Doo";
	int		fd = 1;
	ft_putstr_fd(str, fd);
	return (0);
}*/
