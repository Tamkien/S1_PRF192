/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: 13:27 Fri, Jan 18th, 2019
*Other info:
-This ís the 17th exercise from the workshop.
**/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, n, F = 0, F1 = 1, F2;
	printf("Phan mem nay se giup ban viet ra mot day Fibonacci voi do dai tuy thich.\n");
	printf("Day Fibonacci co dang Fn = F(n-1) + F(n-2) va bat dau tu hai so hang 0, 1.\n");
	printf("Ban muon mot day co bao nhieu so?\n");
	scanf_s("%d", &n);
	if (n <= 2)
	{
		printf("Day so Fibonacci co it nhat 3 so hang!");
	}
	else
	{
		printf("Day Fibonacci cua ban la 0, 1, ");
		for (i = 3; i <= n; i++)
			//bat dau tu so 3 vi da co 2 so dau la 0 va 1.
		{
			F2 = F + F1;//Day co dang F, F1, F2, F3, F4, vv
			if (i < n)//khi do con dau phay
			{
				printf("%d, ", F2);//lay F2 truoc
			}
			else if (i = n)//truong hop so cuoi cung nen co dau cham.
			{
				printf("%d.", F2);
			}
			F = F1;//o F3 thi F thanh F1
			F1 = F2;//con F1 thanh F2. Khong duoc lam nguoc lai. Hay nho bai trao so trong assembly.
		}
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line, neu xoa dong nay ctrinh se ko chay duoc;
	system("pause");
}

