/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue Feb 26th, 2019
*Other info: exercise 3.5
*Version: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
void odd(n)
{
	while (n > 0)
	{
		if (n % 2 != 0)
		{
			printf("%d\n", n - 10 * (n / 10));
		}
		n = n / 10;
	}
}
main()
{
	int n;
	printf("This program can find out the odd digits in your number.\n");
	do
	{
		printf("Enter your number here, enter 0 to exit:\n");
		scanf_s("%d", &n);
		if (n==0)
		{
			break;
		}
		else
		{
			odd(n);
		}
	} while (1);
	printf("\nWritten by Tamkien Cao. Thank you for using my application!\n");//credit line
	system("pause");
}
