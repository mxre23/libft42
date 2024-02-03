/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:29:30 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/03 01:22:54 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == ((unsigned char)c))
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
int main(void)
{
	char *s = "Hola Mundo!";
	int	c = 'M';
	printf("Tuya %s\n", ft_memchr(s, c, 26));
	printf("compu %s\n", memchr(s, c, 26));
	return (0);
}*/
