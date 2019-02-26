/*
*File name :
*Source file name :
*Author : Tamkien Cao
*Last modified : Tue, Feb 26th, 2019
* Other info : exercise 3.8
*Version : 1.0
*/
#include<stdio.h>
#include<stdlib.h>
int month(int k)
{
	int y;
	switch (k)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		k = 31;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		k = 30;
		break;
	}
	case 2:
	{
		printf("Nam bao nhieu?\n");
		scanf_s("%d", &y);
		if (y % 4 == 0)
		{
			k = 29;
		}
		else
		{
			k = 28;
		}
		break;
	}
	}
	return k;
}
main()
{
	int k;
	printf("Phan mem nay co the giup ban tinh so ngay trong mot thang.\n");
	do
	{
		printf("Ban muon biet so ngay cua thang may? (nhap 0 de thoat):\n");
		scanf_s("%d", &k);
		if (k == 0)
		{
			break;
		}
		else if (k > 12 || k < 0)
		{
			printf("Lam gi co thang do?\n");
		}
		else
		{

			printf("Thang %d co %d ngay.\n", k, month(k));
		}
	} while (1);
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
