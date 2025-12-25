/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 20:36:57 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 20:36:57 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak belirlenen dizin sadece alfabetik karakterler içeriyorsa 1, herhangi
//başka bir karakter içeriyorsa 0 sonucunu veren bir fonksiyon oluşturunuz.
//• Eğer str boşsa 1 sonucunu vermelidir.

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include<stdio.h>

int main ()
{
	int x;
	char str[] = "abooAAA()";
	x = ft_str_is_alpha(str);
	printf("%d",x);
}*/