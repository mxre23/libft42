/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:24:05 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/31 22:28:50 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c +32;
	return (c);
}
/*
int main()
{
	int	c;

	c = 0;
	printf("c es igual a %d\n", ft_tolower('Z'));
	return (0);
}*/
