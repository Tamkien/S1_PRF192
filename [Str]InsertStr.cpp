/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Mon, Mar 25th, 2019
*Other info: exercise 6.11
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int k, chen;
	char a[1000], chuoi[1000];
	printf("Phan mem nay giup ban chen mot so ki tu tu sau vi tri ban chon.\n");
	printf("Nhap mot chuoi vao day:\t");
	gets_s(a);
	printf("Nhap chuoi ban muon chen:\t");
	gets_s(chuoi);
	printf("Nhap vi tri ky tu ban muon bat dau chen:\t");
	scanf_s("%d", &chen);
	k = chen + strlen(chuoi);
	for (int j = strlen(a) + strlen(chuoi); j >= k; j--)
		{
			a[j] = a[j - strlen(chuoi)];
		}
	for ( int i = 0; i < strlen(chuoi); i++)//vcl tu gio deo bao gio lam co nua dcm :)
	{	
		a[i + chen] = chuoi[i];
	}
	printf("Chuoi moi cua ban la:\t");
	printf("%s", a);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
