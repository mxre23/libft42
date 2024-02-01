/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 19:57:56 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/27 20:54:40 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}
/*
int main()
{
	char src[] = "Hola, Minililo";
	char dest[15];

	size_t n = strlen(src) + 1;

	printf("antes: \n");
	printf("src: %s\n", src);
	printf("dest: %s\n\n", dest);

	ft_memcpy(dest, src, n);
	
	printf("despues: \n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	return (0);
}*/
