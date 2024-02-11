/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:56:49 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/10 20:00:19 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	if (start >= ft_strlen(s) || len == 0 || !s)
		return (ft_strdup(""));
	i = ft_strlen(s) - start;
	if (i < len)
		len = i;
	substr = (char *) malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	j = start;
	while (s[i] != '\0' && i < len && start < ft_strlen(s))
	{
		substr[i++] = s[j++];
	}
	substr[i] = '\0';
	return (substr);
}
/*
int main()
{
	int		st = 4;
	char	*strsrc = "salamacota a";
	size_t	l = 5;
	char	*strdest;

	strdest = ft_substr(strsrc, st, l);
	printf ("tu funcion retorna:%s\n", strdest);
		return (0);
}*/
