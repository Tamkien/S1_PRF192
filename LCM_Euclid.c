/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Jan 24th, 2019
*Version: 1.0
*Changelog: 
-Translate everything into English.
-Edited some disordering brackets.
-Added some comments.
*Other info:
-This is the 20th exercise from the workshop.
-[README] The idea had been hacked from http://bit.do/eGvJu
**/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int a,b,x;
	printf("This program can find out the largest common multiplier (LCM) of two numbers.\n");
	printf("Insert the larger number here:\n");
	scanf_s("%d", &a);
	printf("Insert the smaller number here:\n");
	scanf_s("%d", &b);
	while (1<2)//always true
	{
	x = a % b;
	if (x == 0)
		{
			printf("The LCM of your numbers is %d.", b);
			break;//see the reason in the link. 
		}
	else
		{
			a = b;
			b = x;
		}
	}
	

	


	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line, neu xoa dong nay ctrinh se ko chay duoc;
	system("pause");
}

