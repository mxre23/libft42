/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:56:43 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/09 14:39:54 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_size);
	}
	return (ptr);
}
/*
int	main()
{
	size_t	c;
	size_t	size;
	void	*a, *b;

	a = ft_calloc(5, 5);
	b = calloc(5, 5);
	
	if (a == b)
		printf("Esta mal\n");
	else
		printf ("Genial nano!\n");
	printf("%lu\n", sizeof(a));
	printf("%lu\n", sizeof(b));
}*/
