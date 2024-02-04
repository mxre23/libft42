/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:35:45 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/03 05:22:46 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr_s1 != *ptr_s2)
			return (*ptr_s1 - *ptr_s2);
		ptr_s1++;
		ptr_s2++;
	}
	return (0);
}
/*
int main()
{
	const char *s01 = "Mini Mini Mini";
	const char *s02 = "Minililo";
	printf("tuyo %s\n %d\n", ft_memcmp(s01, s02, 2));
	printf("el pc %d\n %s\n", memcmp(s01, s02, 3));
	return (0);
}*/
