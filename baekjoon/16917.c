/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16917.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chshin <chshin@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 10:14:54 by chshin            #+#    #+#             */
/*   Updated: 2020/08/03 10:50:53 by chshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** 1. 입력되는 정수 scan (양념/ 후라이드/ 반반/ 양념수/ 후라이드수)
** 2. 일차 방정식으로 모든 경우의 수 계산 후 배열로 저장 반반 두 세트와 양념 + 후라이드 가격 비교 후 조합 결정
** 가격 계산식
** 1) 단품이 더 싼 경우 = XA + YB
** 2) 반반이 더 싼 경우 = (양념 - 후라이드) -> 양/음수 판별 후 해당 단품 가격 개수차이 + 적은 개수 2C
** 3) 반반이 한 마리보다 더 싼 경우 반반으로 전부 구매
**
** 3. 결과값 출력
*/

#include <stdio.h>

int		main(void)
{
	int 	X = 0;
	int 	Y = 0;
	int 	A = 0;
	int 	B = 0;
	int 	C = 0;
	int 	total = 0;

	scanf("%d %d %d %d %d", &A, &B, &C, &X, &Y);
	if ((A + B) < (2 * C))
		total = X * A + Y * B;
	else
	{
		if ((X - Y) > 0)
		{
			if (A < (2 * C))
				total = Y * 2 * C + (X - Y) * A;
			else
				total = Y * 2 * C + (X - Y) * 2 * C;
		}
		else
		{
			if (B < (2 * C))
				total = X * 2 * C + (Y - X) * B;
			else
				total = X * 2 * C + (Y - X) * 2 * C;
		}
	}
	printf("%d\n", total);
	return 0;
}
