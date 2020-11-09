/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwicket <lwicket@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 1970/01/01 00:00:00 by lwicket           #+#    #+#             */
/*   Updated: 1970/01/01 00:00:00 by lwicket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	insertion_sort(int arr[], int len)
{
	int i;
	int j;
	int x;

	i = 1;
	while (i < len)
	{
		x = arr[i];
		j = ++i;
		while (--j && arr[j - 1] > x)
			arr[j] = arr[j - 1];
		arr[j] = x;
	}
}
