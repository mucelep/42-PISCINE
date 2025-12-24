/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 02:41:20 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 02:41:20 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Bir tam sayı dizisini küçükten büyüğe artan şekilde sıralayan bir fonksiyon oluşturunuz.

void	 ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size > 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

/*#include <stdio.h>

int main ()
{
	int i = 0;
	int tab[] = {7, 8, 3, 2, 5};
	int size = 5;
	ft_sort_int_tab(tab,size);
	while (i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	
	return (0);
}*/