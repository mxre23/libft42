/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:31:01 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/02 19:02:11 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		else
			i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
/*
int	main()
{
	const char	s[] = "";
	char *p1;
	char *p2;

	p1 = ft_strchr(s, 'a');
	p2 = strchr(s, 'a');
	printf("ft: %s\n", p1);
	printf("bo: %s\n", p2);
}*/
