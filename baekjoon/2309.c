/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2309.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 11:13:47 by chshin            #+#    #+#             */
/*   Updated: 2020/07/23 18:08:02 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// 1. get nums in array
// 2. sort upperwords
// 3. get sums while find 100
// 4. return array with 7 nums

int	main(void)
{
	int arr[9];
	int i = 0;

	while (i < 9)
	{
		scanf("%d", &arr[i]);
		i++;
	}
	while (i < 9)
	{
		printf("%s", &arr[i]);
		i++;
	}
	return (0);
}

