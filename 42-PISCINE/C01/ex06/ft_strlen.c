/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:41:02 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 22:41:02 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Bir karakter dizisindeki elemanları sayan ve bu sayıyı döndüren bir fonksiyon oluşturunuz.

int	ftstrlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}