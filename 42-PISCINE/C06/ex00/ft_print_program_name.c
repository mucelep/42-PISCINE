/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 19:52:02 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/30 19:52:02 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Burada bir program ile uğraşıyoruz, bu yüzden .c file ’ınızda fonksiyon main olmalıdır.
//• Kendi adını gösteren bir program oluşturunuz.

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void)argc;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}