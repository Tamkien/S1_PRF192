/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Jan 24th, 2019
*Version: 1.0
*Changelog:
-Translate everything into English.
*Other info:
-This is the 9th exercise from the workshop.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int n, maxx, i, a;
	printf("This program can help you find out the largest number in your list.\n");
	printf("How many numbers are there?\n");
	scanf_s("%d", &n);//phai lay so nay de xac dinh so vong lap
	printf("Insert the first number here:\n");
	scanf_s("%d", &maxx);//neu co so lon hon thi se thay the gia tri do vao max
	for (i = 2; i <= n; i++)
		//vong lap, bat dau tu so thu hai
		//day la lap de lay so lieu
	{
		printf("Insert the next number here:\n", i);
		scanf_s("%d", &a);
		if (a > maxx)
		{
			maxx = a;//neu so nhap vao > maxx thi se thay chinh so do vao maxx
		}

	}
	printf("The largest number in your list is %d", maxx);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line, neu xoa dong nay ctrinh se ko chay duoc;
	system("pause");
}
