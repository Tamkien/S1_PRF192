/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Mon, Feb 25th, 2019
*Version: 2.0 
*Other info:
-This is the 8th exercise from the workshop.
**/
#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
	int i, s = 1;
	for (i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
main()
{
	int n;
	printf("This program can help you calculate the factorial of n a.k.a (n!).\n");
	do
	{
		printf("Enter n here, enter 0 to exit:\n");
		scanf_s("%d", &n);
		if (n == 0)
		{
			printf("The factorial of zero is 1.\n");
			break;
		}
		else
		{

			printf("The factorial of %d is %d.\n\n", n, factorial(n));
		}
	} while (1);
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}


