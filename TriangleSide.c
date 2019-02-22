/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Feb 22nd, 2019
*Other info: exercise 2.2
*Version: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	float a, b, c;
	printf("This program can let you know if your numbers can be 3 sides of a triangle.\n");
	printf("Enter the first number:\n");
	scanf_s("%f", &a);
	printf("Enter the next one:\n");
	scanf_s("%f", &b);
	printf("And the last one:\n");
	scanf_s("%f", &c);
	if (a + b > c && b + c > a && c + a > b)
	{
		printf("Your numbers can be 3 sides of a triangle!\n");
	}
	else 
	{
		printf("Your numbers can NOT be 3 sides of a triangle!\n");
	}
	printf("\nWritten by Tamkien Cao. Thank you for using my application!\n");//credit line
	system("pause");
}



