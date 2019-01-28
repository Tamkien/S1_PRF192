/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Wed, Jan 23rd, 2019
*Other info:
-This is the 16th exercise from the workshop.
**/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int n, i;
	printf("Phan mem nay se giup ban liet ke cac uoc so cua so nguyen n.\n");
	printf("Nhap n vao day:\n");
	scanf_s("%d", &n);
	printf("Cac uoc so cua %d la ",n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0 && i < n)
		{
			printf("%d, ", i);
		}
		else if (i == n)
		{
			printf("%d.", n);
		}
	}

	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line, neu xoa dong nay ctrinh se ko chay duoc;
	system("pause");
}

