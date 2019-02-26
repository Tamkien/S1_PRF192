/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Feb 26th, 2019
*Other info:
-Exercise 3.1
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
	printf("This program can help you check if your number is prime or not.\n");

	do
	{
		printf("Enter your number here, enter 0 to exit:\n");
		scanf_s("%d", &n);
		if (n < 2 && n != 0)
		{
			printf("Please enter a number that is greater than 1.\n\n");
		}
		else if (n == 0)
		{
			break;
		}
		else if (prime(n) == 1)
		{
			printf("%d is a prime number.\n\n", n);
		}
		else
		{
			printf("%d is NOT a prime number.\n\n", n);
		}
	}while (1);
printf("\n=================================\n");
printf("Written by Tamkien Cao. Thank you for using my application!\n");
system("pause");
}
