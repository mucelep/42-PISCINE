/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 02:21:50 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 02:21:50 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Bir tam sayı dizisinin sırasını tersine döndüren bir fonksiyon yazınız (ilk olan sona gelecek şekilde, vb)
// Parametreler bir tam sayı işaretçisi ve tam sayı dizisinin uzunluğudur

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		i++;
		size--;
	}
}

/*#include <stdio.h>

int main (void) 
{
	int i = 0;
	int tab[] = {1, 2, 3, 4, 5, 6, 7};
	int size = 7;

	ft_rev_int_tab(tab, size);
	while(i < size)
	{
	printf("%d",tab[i]);
	i++;
	}
	return (0);
}*/