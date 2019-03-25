/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Mon, Mar 25th, 2019
*Other info: exercise 6.14
Y tuong la: dem xong 1 loai ky tu thi xoa no di de khoi phai dem lai.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void count(char a[], char xoa)
{
	int dem = 0;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == xoa)
		{
			for (int j = i; j < strlen(a); j++)
			{
				a[j] = a[1 + j];
			}
			i--;
			dem++;
		}
	}
	printf("\nCo %d ky tu %c", dem, xoa);
}
int main()
{
	int j;
	char a[1000];
	printf("Phan mem nay se dem so luong cac ky tu trong chuoi cua ban.\n");
	printf("Nhap mot chuoi vao day:\t");
	gets_s(a);
	for (int i = 0; i < strlen(a); i++)
	{
		count(a, a[i]);
		i--;
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
