/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Mar 22nd, 2019
*Other info:
-Exercise 5.8
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[16], n;
	printf("This program can convert decimal number into binary number (enter 0 to exit)\n");
	while (1)
	{
		printf("Enter your number here:\t");
		scanf_s("%d", &n);
		if (n < 0 || n>65535)
		{
			printf("Out of the limit!");
		}
		else
		{
			printf("Your binary is ");
			if (n == 0)
			{
				printf("0000 0000 0000 0000\n");
				break;
			}
			else
			{
				for (int i = 15; i >= 0; i--)
				{
					a[i] = n % 2;
					n = n / 2;
				}
				for (int i = 0; i <= 15; i++)
				{
					printf("%d", a[i]);
					if (i % 4 == 3)
					{
						printf(" ");
					}
				}
			}
		}
		printf("\n");
	}
  printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
