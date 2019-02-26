/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Feb 26th, 2019
*Version: 2.0
*Changelog:
- Used function.
*Other info:
-This is the 20th exercise from the workshop.
-[README] The idea had been hacked from http://bit.do/eGvJu
**/
#include<stdio.h>
#include<stdlib.h>
int LCM(int a, int b)
{
	int x;
	while (1)//always true
	{
		x = a % b;
		if (x == 0)
		{

			break;//see the reason in the link. 
		}
		else
		{
			a = b;
			b = x;
		}
	}
	return b;
}
main()
{
	int a, b;
	printf("This program can find out the largest common multiplier (LCM) of two numbers.\n");
	do
	{
		printf("Insert the greater number here, enter 0 to exit:\n");
		scanf_s("%d", &a);
		if (a == 0)
		{
			break;
		}
		else
		{
			printf("Insert the smaller number here:\n");
			scanf_s("%d", &b);
			if (b > a)
			{
				printf("Hey, enter the greater number first.\n");
			}
			else
			{
				printf("The LCM of your numbers is %d.\n", LCM(a, b));

			}
		}
	} while (1);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line, neu xoa dong nay ctrinh se ko chay duoc;
	system("pause");
}
