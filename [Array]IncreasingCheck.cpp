/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Mar 22nd, 2019
*Other info:
-Exercise 5.9
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100], i, n, check = 1;
	printf("Phan mem nay se giup ban kiem tra tinh tang dan cua day so (nhap 0 de ket thuc day so)\n");
	for (i = 0; i < 100; i++)
	{
		printf("Nhap a[%d]\t", i);
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
	n = i - 1;
	for (i = 0; i < n; i++)
	{
		if (a[i]>=a[i+1])
		{
			check = 0;
		}
	}
	if (check == 0)
		printf("Day khong tang dan\n");
	else
		printf("Day tang dan\n");
  printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
