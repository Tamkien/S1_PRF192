/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Sun, Mar 24th, 2019
*Other info: exercise 5.16
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100], n, insert = 0, i;
	printf("Phan mem nay se them phan tu 0 vao sau phan tu le trong day cua ban.");
	printf("Nhap day cua ban, nhap 0 de ket thuc nhap:\n");
	for (i = 1; i < INT_MAX; i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
	n = i;
	for (i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{
			for (int j = n; j > i + 1; j--)
			{
				a[j] = a[j - 1];
			}
			a[i + 1] = insert;
			n++;
		}
	}

	printf("\nDay moi cua ban la\n");
	for (i = 1; i < n; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
