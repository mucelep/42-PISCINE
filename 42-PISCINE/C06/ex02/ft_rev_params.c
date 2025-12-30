/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 20:18:16 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/30 20:18:16 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Kendisine verilen değişkenleri gösteren bir program oluşturunuz.
//• Her satırda bir tane, komut satırının tam tersi düzeninde.
//• argv[0] haricindeki bütün değişkenleri göstermelidir.

#include <unistd.h>

int main(int argc, char **argv)
{
	int	c;
	int	v;

	v = 0;
	c = argc - 1;
	if (argc > 1)
	{
		while (c > 0)
		{
			v = 0;
			while (argv[c][v])
			{
				write(1, &argv[c][v], 1);
				v++;
			}
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}