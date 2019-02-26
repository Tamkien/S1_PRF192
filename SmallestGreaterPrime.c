/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Feb 26th, 2019
*Other info:
-Exercise 2.18
**/
#include<stdio.h>
#include<stdlib.h>
int prime(int n)
{
	int p = 1, i = 2;
	while (i <= n / 2)
	{
		if (n%i == 0)
		{
			p = 0;
		}
		i++;
	}
	return p;
}
main()
{
	int n;

	printf("This program can help you find out the smallest prime number that is greater than yours.\n");
	do
	{
		printf("Enter your number here, enter 0 to exit:\n");
		scanf_s("%d", &n);
		if (n < 2 && n != 0)
		{
			printf("2 is the number you're looking for.\n\n");
		}
		else if (n == 0)
		{
			printf("2 is the number you're looking for.\n\n");
			break;
		}
		else
		{
			do
			{
				n++;
				if (prime(n) == 1)
				{
					printf("%d is the number you're looking for.\n\n", n);
					break;
				}
			} while (1);
		}

	} while (1);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
