/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 05:20:39 by mucelep           #+#    #+#             */
/*   Updated: 2026/01/01 05:20:39 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*• Bir tam sayı matrisini dağıtıp atayan ft_ultimate_range fonksiyonu oluşturunuz.
Bu tam sayı matrisi min ve max arasındaki tüm değerleri bulundurmalıdır.
• Min dahil edilmeli - max dahil edilmemelidir.
• Aralık büyüklüğü çıktı olmalıdır (ya da hata durumunda -1).
• Eğer mindeğeri ´ max’ın değerine eşit ya da büyükse, aralık NULL gösterecektir ve
0 sonucunu verecektir.*/

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	
	size = max - min;
	if(min >= max)
	{
		*range = NULL;
		return(0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if(!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

/*#include <stdio.h>

int main ()
{
	int	*arr;
	int	len;
	int	i = 0;

	len = ft_ultimate_range(&arr,3,7);
	while (i < len)
	{
		printf("%d  ",arr[i]);
		i++;
	}
	printf("\n%d",len);
	free(arr);
	return(0);
}*/