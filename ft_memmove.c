/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 21:17:57 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/30 20:21:02 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	return (dest_ptr);
}
/*
int main()
{
	char src[] = "Hola, Minililo";
	char dest[10];

	size_t n = ft_strlen(src) + 1;

	printf("antes: \n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	ft_memmove(dest, src, n);

	printf("despues:\n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);

	return (0);
}*/
