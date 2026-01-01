/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 21:38:26 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 21:38:26 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Bir işaretleyiciyi başka bir işaretliyiciden başka işaretleyiciye ve başka işaretleyiciye ve ...
//tam sayıya atayan bir fonksiyon oluşturunuz. Bu fonksiyonun parametresi olsun ve fonksiyon o tam sayıya "42" değerini atasın.

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/*#include <unistd.h>

int	main(void)
{
	int n = 0;

	int *p1 = &n;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;

	ft_ultimate_ft(p9);
	if(n == 42)
		write(1, "42\n", 3);
	return (0);
}*/