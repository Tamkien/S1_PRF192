/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Mar 22nd, 2019
*Other info:
-Exercise 5.7
*/
#include <stdio.h>
#include <stdlib.h>
int dx(int n)
{
	int a[100], check = 1;
	for (int i = 0; i < n; i++)
	{
		printf("Nhap a[%d]", i);
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i <= n / 2; i++)
	{
		if (a[i] != a[n - 1 - i])
		{
			check = 0;
		}
	}
	return check;
}
int main()
{
	int n;
	printf("Day co bao nhieu so?\t");
	scanf_s("%d", &n);
	if (dx(n) == 0)
	printf("Day khong doi xung\n");
	else
	printf("Day doi xung\n");
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
