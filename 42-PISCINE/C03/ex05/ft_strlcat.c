/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 03:05:21 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 03:05:21 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strlcat fonksiyonun davranışını yeniden üret (man strlcat).

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	d = 0;
	s = 0;
	i = 0;
	while(dest[d])
		d++;
	while(src[s])
		s++;
	if (size <= d)
		return (size + s);
	while (src[i] && d + i < size -1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}
