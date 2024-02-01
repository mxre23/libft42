/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 22:05:58 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/31 21:26:50 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= dstsize)
		return (dstsize + src_len);
	while (src[i] != '\0' && dst_len + i < dstsize - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include "ft_strlen.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main() 
{
    char dst[29] = "Minililo, ";
    const char *src = "the best!";
    size_t dstsize = sizeof(dst);

    size_t result = ft_strlcat(dst, src, dstsize);

    printf("Concatenated string: %s\n", dst);
    printf("Length of concatenated string: %zu\n", result);

    return 0;
}*/
