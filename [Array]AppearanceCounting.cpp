/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 5th, 2019
*Other info:
-Exercise 5.2
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a[100], n, x, dem = 0;
	printf("Day co bao nhieu so nguyen?\t");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("Nhap so nguyen thu %d\n", i);
		scanf_s("%d", &a[i]);
	}
	printf("Ok. Gio hay nhap so x:\n");
	scanf_s("%d", &x);
	for (int i = 1; i <= n; i++)
	{
		if (x == a[i])
		{
			dem++;
		}
	}
	printf("So %d xuat hien %d lan!\n", x, dem);
  printf("\n=================================\n");
  printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
