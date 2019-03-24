/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Mon, Mar 25th, 2019
*Other info: exercise 6.10
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i, k, xoa, xoa1, soktu;
	char a[1000];
	printf("Phan mem nay giup ban xoa mot so ki tu tu vi tri ban chon.\n");
	printf("Nhap mot chuoi vao day:\n");
	gets_s(a);
	printf("Nhap vi tri ky tu ban muon bat dau xoa\t");
	scanf_s("%d", &xoa1);
	xoa = xoa1 - 1;//vi chuoi bat dau tu 0 nen phai -1 cho user-friendly
	printf("Nhap so ky tu ban muon xoa:\t");
	scanf_s("%d", &soktu);
	k = xoa + soktu;
	for (i = xoa; i < k; i++)//int k chi cho chay den so char can xoa thoi
	{
		for (int j = xoa; j < strlen(a); j++)//strlen keo ca gian sang ben trai
		{
			a[j] = a[1 + j];
		}
	}
	printf("Chuoi moi cua ban la:\t");
	printf("%s", a);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
