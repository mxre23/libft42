/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:47:19 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/31 22:29:00 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c -32;
	return (c);
}
/*
int main()
{
	int	c;
	
	c = 0;
	printf("c es igual a %d\n", ft_toupper('z'));
	return (0);
}*/
