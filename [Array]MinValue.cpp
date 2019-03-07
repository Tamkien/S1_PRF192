/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Mar 7th, 2019
*Other info:
-Exercise 5.3
*/
#include <stdio.h>
#include <stdlib.h>
void min()
{
	int a[100], thutu;
	printf("Phan mem nay giup ban tim ra so nho nhat trong day cua ban. Nhap 0 de ket thuc day.\n");
	for (int i = 1; i < INT_MAX; i++)
	{
		printf("Nhap n = ");
		scanf_s("%d", &a[i]);
		if (a[i]==0)
		{
			break;
		}
		else if (a[i]<a[1])
		{
			a[1] = a[i];
			thutu = i;
		}
	}
	printf("So nho nhat la %d, va do la so thu %d ma ban nhap vao.\n", a[1], thutu);
}
int main()
{
	min();
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
