/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Feb 26th, 2019
*Other info:
-Exercise 2.10
**/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int d,n,g;
	printf("Cac truong hop co the xay ra la:\n");
	for (d = 1; d <= 100; d++)
	{
		for (n = 1; n <= 100; n++)
		{
			for ( g = 1; g < 100; g++)
			{
				if (d+n+g==100&&g%3==0&&5*d+3*n+g/3==100)
				{
					printf("%d trau dung, %d trau nam, %d trau gia.\n", d, n, g);
				}
			}
		}
	}

	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
