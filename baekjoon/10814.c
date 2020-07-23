/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10814.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 18:08:14 by chshin            #+#    #+#             */
/*   Updated: 2020/07/23 18:08:30 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int age;
    char name[101];
    int order;
} info;

int age_compare(const void *m, const void *n)
{
	info *a, *b;
	a = (info *)m;
	b = (info *)n;

	if (a->age > b->age)
		return 1;
	else if (a->age == b->age && a->order > b->order)
		return 1;
    else
        return -1;
}

int main()
{
    int i = 0;
    int T = 0;
	info *no;

	scanf("%d", &T);
	if (!(no = malloc(sizeof(info) * (T + 1))))
		return 0;
	while (i < T)
	{
		scanf("%d %s", &no[i].age, no[i].name);
        no[i].order = i;
		i++;
	}
	qsort(no, T, sizeof(info), age_compare);
	i = 0;
	while (i < T)
	{
		printf("%d %s\n", no[i].age, no[i].name);
		i++;
	}
	return 0;
}
