/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Wed, Jan 23rd, 2019
*Other info:
-This is the 15th exercise in the workshop.
**/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n, i = 2;
	printf("Phan mem nay se giup ban kiem tra mot so co phai la so nguyen to hay khong.\n");
	printf("Nhap so cua ban vao day:\n");
	scanf_s("%d", &n);
	if (n < 2)
	{
		printf("Hay nhap mot so nguyen lon hon 1.");

	}
	else if (n == 2 || n == 3)
	{
		printf("%d la so nguyen to.", n);
	}
	else
	{
		while (i <= n / 2)
		{
			if (n%i == 0)
			{
				printf("%d khong phai la so nguyen to.", n);
				break;
			}
			else if (i == n / 2)
			{
				printf("%d la so nguyen to.", n);
			}
			i++;
		}
	}


	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line, neu xoa dong nay ctrinh se ko chay duoc;
	system("pause");
}