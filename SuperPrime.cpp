/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Wed, Mar 6th, 2019
*Version 2.0
*Changelog: 
- So sieu nguyen to nho nhat la 23.
- Fixed some minor bugs.
*/
#include<stdio.h>
#include<stdlib.h>
int ktra(int n)//kiem tra so nguyen to
{
	int prime = 1;
	if (n == 1)
	{
		prime = 0;
	}
	for (int i = 2; i < n; ++i)
	{
		if (n%i == 0)
		{
			prime = 0;
		}
	}
	return prime;
}
int ktrasnt(int i)//kiem tra so sieu nguyen to
{
	i = i / 10;
	if (ktra(i) == 0)
	{
		return 0;
	}
	else if (ktra(i) == 1)
	{
		if (i == 0)
		{
			return 1;
		}
		else
		{
			ktrasnt(i);
		}
	}

}
int lowsnt(int n)//tim so sieu nguyen to nho hon n
{
	while (n > 0)
	{
		n--;
		if (ktra(n) == 0)
		{
			continue;
		}
		else if (ktra(n) == 1)
		{
			if (ktrasnt(n) == 1)
			{
				return n;
			}
			else
			{
				continue;
			}
		}

	}
}
int highsnt(int n)//tim so sieu nguyen to lon hon n
{
	while (1)
	{
		n++;
		if (ktra(n) == 0)
		{
			continue;
		}
		else if (ktra(n) == 1)
		{
			if (ktrasnt(n) == 1)
			{
				return n;
			}
			else
			{
				continue;
			}
		}
	}
}
int main()
{
	int n;
	printf("Nhap 0 de ket thuc chuong trinh.\n");
	while (1)
	{
		printf("\nNhap n:\t");
		scanf_s("%d", &n);
		if (n == 0)
		{
			break;
		}
		//duyet dau vao:
		else if (0 > n || 30000 < n)
		{
			printf("Nhap sai, vui long nhap lai.\n");
			scanf_s("%d", &n);
		}
		else
		{
			//kiem tra nguyen to:
			if (ktra(n) == 0)
			{
				printf("%d khong phai la so nguyen to.\n", n);
			}
			else
			{
				printf("%d la so nguyen to.\n", n);
			}
			//so sieu nguyen to gan nhat:
			if (n<23)
			{
				printf("So sieu nguyen to gan %d nhat la 23.\n", n);//so snt nho nhat la 23
			}
			else if ((n - lowsnt(n)) > (highsnt(n) - n) || lowsnt(n) == 0)
			{
				printf("So sieu nguyen to gan %d nhat la %d.\n", n, highsnt(n));
			}
			else if ((n - lowsnt(n)) < (highsnt(n) - n))
			{
				printf("So sieu nguyen to gan %d nhat la %d.\n", n, lowsnt(n));
			}
			else
			{
				printf("Hai so sieu nguyen to gan %d nhat la %d va %d (gan bang nhau)\n", n, lowsnt(n), highsnt(n));
			}
		}

	}
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
