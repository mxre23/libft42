/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:23:58 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/02/20 13:14:14 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		len_s1;
	const char	*start;
	const char	*end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	len_s1 = (ft_strlen(s1));
	start = s1;
	while (*start && char_in_set(*start, set))
		start++;
	if (*start == '\0')
		return (ft_strdup(""));
	end = s1 + len_s1 - 1;
	while (end > start && char_in_set(*end, set))
		end--;
	return (ft_substr(s1, start - s1, end - start + 1));
}
/*
int main()
{
	char const	*string = "xmc xmc Minililoo cmx cmx";
	char const	*set = "xmc ";
	char		*result;
	result = ft_strtrim(string, set);
	printf("el string trimmed is: %s\n", result);
	return (0);
}*/
