/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 04:49:29 by mucelep           #+#    #+#             */
/*   Updated: 2026/01/01 04:49:29 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//tam sayılar matrisi çıktısı veren bir ft_range fonksiyonu oluşturunuz. Bu tam
//sayı matrisi min ve max arasındaki tüm değerleri bulundurmalıdır .
//• Min dahil edilmeli - max dahil edilmemelidir.
//• Eğer mindeğeri ´ max’ın değerine eşit ya da büyükse, null göstergeci çıkmalıdır 

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if(min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if(!arr)
		return(NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return(arr);
}

/*#include <stdio.h>

int main ()
{
	int	min = 3;
	int max = 7;
	int	*a;
	int i = 0;

	a = ft_range(max,max);
	while (i < max - min)
	{
		printf("%d ",a[i]);
		i++;
	}
	free(a);
	return (0);
}*/