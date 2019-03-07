/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Mar 7th, 2019
*Other info:
-Exercise 5.4
*/
#include <stdio.h>
#include <stdlib.h>
void counting()
{
	int a[100], odd = 0, even = 0;
	for (int i = 1; i < INT_MAX; i++)
	{
		printf("Enter your number here:\t");
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
		{
			break;
		}
		else if (a[i] % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("There are %d odd and %d even number(s).\n", odd, even);
}
int main()
{
	printf("This program can help you count odd and even numbers that you entered.\nEnter 0 to stop entering (it won\'t be included).\n");
	counting();
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
