/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:48:50 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/19 18:59:27 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int c;

	c = 96;
	if (ft_isalpha(c) == 1)
		printf ("V");
	else 
		printf ("F");
	if (isalpha(c) == 1)
		printf ("V");
	else 
		printf ("F");
	return (0);
}*/
