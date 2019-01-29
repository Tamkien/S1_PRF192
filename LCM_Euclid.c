/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Jan 24th, 2019
*Other info:
-This is the 20th exercise from the workshop.
-The idea had been hacked from http://bit.do/eGvJu
**/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int a,b,x;
	printf("Phan mem nay se giup ban tim uoc chung lon nhat cua 2 so.\n");
	printf("Nhap so lon:\n");
	scanf_s("%d", &a);
	printf("Nhap so be:\n");
	scanf_s("%d", &b);
	while (1<2)
	{
	x = a % b;
	if (x == 0)
	{
		printf("Uoc chung lon nhat cua hai so la %d.", b);
		break;
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

