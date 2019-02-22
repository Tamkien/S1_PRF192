/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Feb 22nd, 2019
*Other info: exercise 2.1
*Version: 1.0
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	int a, b, c, max;
	printf("This program can help you find out the largest of three numbers, if you can't do it.\n");
	printf("Enter the first number:\n");
	scanf_s("%d", &a);
	printf("Enter the second one:\n");
	scanf_s("%d", &b);
	printf("And the last one:\n");
	scanf_s("%d", &c);

	if (a >= b && a >= c)
	{
		max = a;
	}
	else if (b >= c && b >= a)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	printf("The largest number is %d!\n", max);
	printf("\nWritten by Tamkien Cao. Thank you for using my application!\n");//credit line
	system("pause");
}
