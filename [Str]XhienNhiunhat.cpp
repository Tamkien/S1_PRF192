/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Apr 19th, 2019
*Other info: exercise 6.13
-Added more comments
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int dem[1000], xet[1000], n = 0, max = 0, x = 0;
	char a[1000], kytu;
	printf("This program can find out which character appears the most times.\n");
	printf("Enter your string:\n");
	gets_s(a);//vi du nhap vao xxxxyxyzxyxz
	//Doan nay la dem so cac ky tu
	for (int i = 0; i < strlen(a); i++)
	{
		dem[i] = 0;
		for (int k = 0; k <= i; k++)
		{
			if (a[i] == a[k] && k != i)
			{
				break;//chi dem cac ky tu lan dau, neu xet thay ky tu duoc dem roi thi bo qua, ko dem nua, cho do la gtri 0
			}
			else if (k == i)
			{
				for (int j = 0; j < strlen(a); j++)
				{
					if (a[i] == a[j])
					{
						dem[i]++;//tu j den strlen, neu trung thi dem +1
					}
				}
			}
		}
	}
	//Ket qua doan tren se la X000Y00Z0000, X Y Z la so lan xuat hien cua cac ky tu x y z. Doan tiep theo la xoa so 0, don vao mang xet[]
	for (int i = 0; i < strlen(a); i++)
	{
		if (dem[i] != 0)
		{
			xet[n] = dem[i];
			n++;
		}
	}//mang xet nay chi con 3 ptu X, Y, Z
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
