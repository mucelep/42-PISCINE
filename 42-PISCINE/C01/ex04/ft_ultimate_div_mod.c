/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mucelep <celepm82@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 22:29:23 by mucelep           #+#    #+#             */
/*   Updated: 2025/12/23 22:29:23 by mucelep          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Bu fonksiyon a parametresini b parametresine böler. Bölme işleminin sonucu a ile
//belirtilen tam sayıda saklanır. Bölümün kalanı b ile belirtilen tam sayıda saklanır

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swp;

	swp = *a / *b;
	*b = *a % *b;
	*a = swp;
}
