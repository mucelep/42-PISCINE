/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:36:47 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 22:36:47 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Standart çıktıya karakter dizisi yazan bir fonksiyon oluşturunuz.

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
