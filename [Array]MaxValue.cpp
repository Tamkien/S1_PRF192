/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 5th, 2019
*Other info:
-Exercise 5.1
*/
#include <stdio.h>
#include <stdlib.h>
int max(int n)
{
	int a[100];
	for (int i = 1; i <= n; i++)
	{
		printf("Nhap so thu %d\n", i);
		scanf_s("%d", &a[i]);
		if (a[i] > a[1])
			a[1] = a[i];
	}
	return a[1];
}
int main(int argc, char const *argv[])
{
	int n;
	printf("Co bao nhieu so?\n");
	scanf_s("%d", &n);
	printf("So lon nhat la %d\n", max(n));	
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
