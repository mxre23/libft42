/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:06:44 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/02 21:38:17 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int	main()
{
	const char	s[] = "Hola Minililo";
	char	*s1;
	char	*s2;

	s1 = ft_strrchr(s, 's');
	s2 = strrchr(s, 's');
	printf("s1 = %s\n", s1);
	printf("s2 = %s\n", s2);
	return (0);
}*/
