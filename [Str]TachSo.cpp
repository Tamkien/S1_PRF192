/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Mon, Mar 25th, 2019
*Other info: exercise 6.15
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int demso = 0, j = 0;
	char a[1000], so[1000];
	printf("Phan mem nay giup ban kiem tra xem trong chuoi co ky tu so hay khong.\n");
	printf("Nhap mot chuoi vao day:\t");
	gets_s(a);
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] > 47 && a[i] < 58)
		{
			demso++;
			so[j] = a[i];
			j++;
		}
	}
	if (demso == 0)
		printf("Chuoi khong co ky tu so.\n");
	else
	{
		printf("Chuoi co %d ky tu so. Cac so do la:\n", j);
		for (int k = 0; k < j; k++)
		{
			printf("So [%d] = %c\n", k, so[k]);
		}
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
