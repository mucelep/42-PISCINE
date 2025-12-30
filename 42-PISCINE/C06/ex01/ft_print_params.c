/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:02:32 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/30 20:02:32 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Burada bir program ile uğraşıyoruz, bu yüzden .c file ’ınızda fonksiyon main olmalıdır.
//• Kendi değişkenlerini gösteren bir program oluşturunuz.
//• Her satırda bir tane, komut satırındakiyle aynı düzende olacak şekilde .
//• argv[0] haricindeki bütün değişkenleri göstermelidir

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i])
			{
				write(1, &argv[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}