/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 26th, 2019
*Other info:
-Exercise 4.2
*/
#include <stdio.h>
#include <stdlib.h>
void Max(int *count, int *max)
{
	printf("So so nguyen nhap vao la %d, so lon nhat trong do la : %d", *count, *max);
}
int main()
{
	int count = 0, max = 0, input=0;
	printf("Phan mem nay giup ban tim ra so lon nhat trong day cua ban. Nhap 0 de ket thuc day.\n");
	scanf_s("%d", &input);
	while (input != 0)
	{
		count++;
		if (input>max)
		{
			max = input;
		}
		scanf_s("%d", &input);
	}
	Max(&count, &max);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
