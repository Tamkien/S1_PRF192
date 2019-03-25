/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 26th, 2019
*Other info: exercise 6.9
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fix(char c[])
{
	char word[100];
	int n = strlen(c), lastspace = 0;
	for (int i = 0; i < n; i++)//tim space cuoi cung
	{
		if (c[i] == 32)
		{
			lastspace = i;
		}
	}
	if (lastspace == 0)//khong con dau cach nua thi se ket thuc bang cach in tu dau tien
	{
		for (int i = 0; i < strlen(c); i++)
		{
			printf("%c", c[i]);
		}
	}
	else
	{
		for (int i = lastspace + 1; i < n; i++)
		{
			{
				word[i - lastspace - 1] = c[i - 1];
			}
			word[i - lastspace - 1] = c[i];
		}
		for (int i = 0; i < n - lastspace - 1; i++)
		{
			printf("%c", word[i]);
		}
		printf(" ");//minh phai bu dau cach vi se xoa di
		c[lastspace] = '\0';//ngat cau tu dau cach, bien tu ap chot thanh tu cuoi cung
		fix(c);//lap lai
	}
}
int main()
{
	char a[1000];
	printf("Phan mem nay se dao nguoc cau cua ban.\nNhap mot cau vao day\t");
	gets_s(a);
	printf("Cau moi la\t");
	fix(a);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
