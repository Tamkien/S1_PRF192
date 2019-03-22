/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Mar 23rd, 2019
*Other info:
This program can reorder your array into increasing or decreasing order.
*/
#include <stdio.h>
#include <stdlib.h>
int increasing(int a[], int j, int n)
{
	int x = 0;
	for (int i = j + 1; i < n; i++)
	{
		if (a[i] < a[j])
		{
			x = a[j];
			a[j] = a[i];
			a[i] = x;
		}
	}
	return a[j];
}
int decreasing(int a[], int j, int n)
{
	int x = 0;
	for (int i = j + 1; i < n; i++)
	{
		if (a[i] > a[j])
		{
			x = a[j];
			a[j] = a[i];
			a[i] = x;
		}
	}
	return a[j];
}
int main()
{
	int a[100], n, i, c;
	printf("This program can reorder your array into increasing or decreasing order.\n");
	printf("Enter 0 for increasing, other for decreasing order.\n");
	scanf_s("%d", &c);
	printf("Ok. Now if you want to stop entering, enter 0.\n");
	for (i = 0; i < INT_MAX; i++)
	{
		printf("Enter a[%d] = ", i);
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
		{
			break;
		}
	}
	n = i;
	printf("\nYour new order is\n");
	for (int j = 0; j < n; j++)
	{
		if (c == 0)
			printf("%d\n", increasing(a, j, n));
		else
			printf("%d\n", decreasing(a, j, n));
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
