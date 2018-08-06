
#include "stdafx.h"
#include <stdio.h>
#include <math.h>  /* cos()を使うので必要 */

int main()
{
	int n, sum = 0;
	double sumf = 0;

	for (n = 1; n <= 100; n++)
		sum += n;

		printf("1 + 2 + ...+ 100 = %d\n", sum);

		sum = 0;
	

		for (double i = 0; i < 10; i++)
			// 2乗
			printf("1+2+2^2+2^3+...2^10 = %d\n", 1 + i*1 , pow(1*(i), i));
		
}