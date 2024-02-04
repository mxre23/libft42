/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:48:22 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/04 20:31:29 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0' && (i + needle_len) <= len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char	*haystack;
	const char	*needle;
	size_t		len;

	haystack = "Carino mio che seiii";
	needle = "iii";
	len = 25;
	char	*result = (char *)ft_strnstr(haystack, needle, len);

	if (result != NULL)
	{
		printf("se encontro el needle %s en los primeros %zu caracteres.\n",
			   	needle, len);
		printf("posicion de inicio: %ld\n", result - haystack);
	}
	char	*resultpc = (char *)strnstr(haystack, needle, len);
	if (result != NULL)
	{
		printf("compu:found needle %s in first %zu charcters.\n", needle, len);
		printf("posicion de inicio: %ld\n", resultpc - haystack);
	}
	return (0);
}*/
