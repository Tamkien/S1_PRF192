/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Sun, Mar 24th, 2019
*Other info:
-Exercise 6.7
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dx(char a[])
{
	int check = 1;
	for (int i = 0; i <= (strlen(a) / 2); i++)
	{
		if (a[i] != a[strlen(a) - 1 - i])
		{
			check = 0;
		}
	}
	return check;
}
int main()
{
	char a[1000];
	printf("Nhap chuoi cua ban:\t");
	gets_s(a);
	if (dx(a) == 0)
		printf("\nChuoi khong doi xung.\n");
	else
		printf("\nChuoi doi xung.\n");
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
