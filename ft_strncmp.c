/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:52:26 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/03 00:28:02 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (((unsigned char)*s1) - ((unsigned char)*s2));
}
/*int main(void)
{
	size_t	n;
	char	*s1;
	char	*s2;

	s1 = "Hola Minililo";
	s2 = "Adeu que vagi be Minililo";
	n = 5;
	printf("tuya: %d\n", ft_strncmp(s1, s2, n));
	printf("funcion original: %d\n", strncmp(s1, s2, n));
	return(0);
}*/
