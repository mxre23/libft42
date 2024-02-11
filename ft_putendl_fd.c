/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 05:14:11 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/11 05:37:57 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	write(fd, "\n", 1);
}
/*
int main()
{
	char	*str = "Scooby Doo pa pa";
	int		fd = 1;
	ft_putendl_fd(str, fd);
	return (0);
}*/
