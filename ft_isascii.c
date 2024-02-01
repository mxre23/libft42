/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 21:23:53 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/01/19 19:48:30 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>*/

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}
/*int main()
{
	int c;

	c = 29;
	if (ft_isascii(c) == 1)
		printf ("1\n");
	else
		printf("0\n");
	if (isascii(c) == 1)
		printf ("1\n");
	else
		printf("0\n");
	return (0);
}*/
