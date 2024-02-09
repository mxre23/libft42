/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:45:31 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/09 16:54:00 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	char	*s2;
	size_t	i;

	i = 0;
	len_s1 = (ft_strlen(s1));
	s2 = (char *) malloc(len_s1 * sizeof(char) + 1);
	if (!s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int	main()
{
	char	*string = "HolaNano";
	char	*string2 = ft_strdup(string);
	printf("el string copiado es: %s\n", string2);
		return (0);
}*/
