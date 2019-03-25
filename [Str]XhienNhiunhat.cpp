/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 26th, 2019
*Other info: exercise 6.13
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int dem[1000], xet[1000], n = 0, max=0, x = 0;
	char a[1000], kytu;
	printf("This program can delete a character as you choose in your string.\n");
	printf("Enter your string:\n");
	gets_s(a);
	//Doan nay la dem so cac ky tu
	for (int i = 0; i < strlen(a); i++)
	{
		dem[i] = 0;
		for (int k = 0; k <= i; k++)
		{
			if (a[i] == a[k] && k != i)
			{
				break;
			}
			else if (k == i)
			{
				for (int j = 0; j < strlen(a); j++)
				{
					if (a[i] == a[j])
					{
						dem[i]++;
					}
				}
			}
		}
	}
	//Ket qua doan truoc kieu nhu x000y00z0000. Doan tiep theo la xoa so 0, don vao mang xet[]
	for (int i = 0; i < strlen(a); i++)
	{
		if (dem[i] != 0)
		{
			xet[n] = dem[i];
			n++;
		}
	}
	//Doan nay tim max
	for (int i = 0; i < n; i++)
	{
		if (xet[i] > max)
		{
			max = xet[i];
			x = 0;
		}
		else if (xet[i] == max)
			x++;
	}
	if (x == 0)
	{
		for (int i = 0; i < strlen(a); i++)
		{
			if (dem[i] == max)//quet xem ky tu nao co so lan xuat hien bang max
			{
				kytu = a[i];
			}
		}
		printf("Ky tu xuat hien nhieu nhat la %c voi %d lan.", kytu, max);
	}
	else
		printf("Khong co ky tu xuat hien nhieu nhat, dong giai nhat thi khong tinh.");
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}