/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Mar 23rd, 2019
*Other info: exercise 5.11
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100], n, i;
	printf("Phan mem nay se xoa mot phan tu trong day cua ban.");
	printf("Nhap day cua ban, nhap 0 de ket thuc nhap:\n");
	for (i = 1; i < INT_MAX; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
	n = i - 1;
	printf("Ban muon xoa phan tu thu may?\t");
	scanf_s("%d", &i);
	for (i; i <= n; i++)
	{
		a[i] = a[1 + i];
	}
	printf("Day moi cua ban la\n");
	for (i = 1; i <= n; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
