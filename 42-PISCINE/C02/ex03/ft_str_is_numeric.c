/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:02:17 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 21:02:17 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak belirlenilen dizin sadece rakam içeriyorsa 1, herhangi başka bir
//karakter içeriyorsa 0 sonucunu veren bir fonksiyon oluşturunuz.
//Eğer str boşsa 1 sonucunu vermelidir

int	 ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);	
}

/*#include<stdio.h>

int main ()
{
	int x;
	char str[] = "01234567a8";
	x = ft_str_is_numeric(str);
	printf("%d",x);
}*/