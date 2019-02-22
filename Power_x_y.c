/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Feb 22nd, 2019
*Other info: exercise 2.4
*Version: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
int power(int x, int y)
{
	int S = 1;
	for (int i = 1; i <= y; i++)
	{
		S *= x;
	}
	return S;
}
main()
{
	int x, y, S = 1;
	printf("This program can help you calculate x^y.\n");
	printf("=================================\n");
	do
	{
		printf("Enter x here enter 0 to exit.\n");
		scanf_s("%d", &x);

		if (x == 0)
		{
			printf("0^n = 0\n");
			break;
		}
		else
		{
			printf("Enter y here\n");
			scanf_s("%d", &y);
			for (int i = 1; i <= y; i++)
			{
				S *= x;
			}
			printf("%d^%d = %d\n\n", x, y, power(x, y));
		}

	} while (1);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
