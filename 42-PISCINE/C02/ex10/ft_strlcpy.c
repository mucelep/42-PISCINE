/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 22:35:31 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/24 22:35:31 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strlcpy fonksiyonun davranışını yeniden üret (man strlcpy).

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (src[j])
		j++;
	if (size == 0)
		return(j);
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}