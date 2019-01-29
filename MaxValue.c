/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Jan 24th, 2019
*Other info:
-This is the 9th exercise from the workshop.
**/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int n, maxx, i, a;
	printf("Phan mem nay se giup ban tim ra so lon nhat trong day so cua ban.\n");
	printf("Day so cua ban co bao nhieu so?\n");
	scanf_s("%d", &n);//phai lay so nay de xac dinh so vong lap
	printf("Nhap so thu nhat:\n");
	scanf_s("%d", &maxx);//neu co so lon hon thi se thay the gia tri do vao max
	for (i = 2; i <= n; i++)
		//vong lap, bat dau tu so thu hai
		//day la lap de lay so lieu
	{
		printf("Nhap so thu %d:\n", i);
		scanf_s("%d", &a);
		if (a > maxx)
		{
			maxx = a;//neu so nhap vao > maxx thi se thay chinh so do vao maxx
		}

	}
	printf("So lon nhat trong day la %d", maxx);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line, neu xoa dong nay ctrinh se ko chay duoc;
	system("pause");
}
