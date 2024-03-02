/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmore-oj <jmore-oj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 21:04:53 by jmore-oj          #+#    #+#             */
/*   Updated: 2024/03/02 21:31:19 by jmore-oj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*void	ft_f(unsigned int i, char *letter)
{
	printf ("index: %u, char %c \n", i, *letter);
}
int	main(void)
{
	char	*str= "abcd";
	printf("La cadena inicial es: %s\n", str);
	ft_striteri(str, ft_f);
	return (0);
}*/
