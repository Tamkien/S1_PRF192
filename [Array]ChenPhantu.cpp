/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Sun, Mar 24th, 2019
*Other info: exercise 5.12
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100], n, insert, i;
	printf("Phan mem nay se them mot phan tu trong day cua ban.");
	printf("Nhap day cua ban, nhap 0 de ket thuc nhap:\n");
	for (i = 1; i < INT_MAX; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
	n = i;
	printf("Ban muon them vao sau phan tu thu may?\t");
	scanf_s("%d", &i);
	printf("Nhap gia tri cua a[%d]:\t", i + 1);
	scanf_s("%d", &insert);
	for (int j = n; j > i + 1; j--)
	{
		a[j] = a[j - 1];
	}
	a[i + 1] = insert;
	printf("Day moi cua ban la\n");
	for (i = 1; i <= n; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
