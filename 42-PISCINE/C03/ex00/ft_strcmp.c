/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 01:40:00 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/25 01:40:00 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strcmp fonksiyonun davranışını yeniden üret (man strcmp).

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>

int main ()
{
	int	x;
	char s1[] = "aaaba";
	char s2[] = "aaab";
	x = ft_strcmp(s1,s2);
	printf("%d",x);
}
