/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:28:38 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 21:28:38 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Bütün harfleri büyük harfe dönüştüren bir fonksiyon oluşturunuz
//str sonucunu vermelidir.

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include<stdio.h>

int main()
{
	char	str[]= "aboOOO";
	char	*p = str;
	ft_strupcase(p);
	printf("%s",p);
	return (0);
}*/