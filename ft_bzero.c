/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:06:54 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/27 18:21:53 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		++i;
	}
}
/*
int	main()
{	
	char	s[8] = "holaaaa";

	ft_bzero(s + 2, 2);
		printf("el tuyo es \"%s\"\n", s);

	bzero(s + 2, 2);
		printf("el pc es \"%s\"\n", s);
	return (0);
}*/
