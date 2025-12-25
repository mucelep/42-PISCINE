/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:16:26 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 21:16:26 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Parametre olarak belirlenilen dizin sadece küçük harfli alfabetik karakterler içeriyorsa 1,
//herhangi başka bir karakter içeriyorsa 0 sonucunu veren bir fonksiyon oluşturunuz.
//• Eğer str boşsa 1 sonucunu vermelidir.

int	ft_str_is_lowercase(char *str)
{
		int	i;

	i = 0;
	if (str[0] == 0)
		return (1);
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}