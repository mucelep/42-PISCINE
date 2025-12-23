/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:06:56 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 22:06:56 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Adresleri parametre olarak girilmiş iki tam sayının değerini değiştiren bir fonsksiyon oluşturunuz.

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

/*#include <stdio.h>

int main()
{
	int a,b;
	a = 1;
	b = 2;
	ft_swap(a,b);
	printf("a = %d \n b = %d",a,b);
	return 0;
}*/