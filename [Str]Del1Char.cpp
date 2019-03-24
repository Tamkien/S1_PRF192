/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Sun, Mar 24th, 2019
*Other info: exercise 6.8
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int n, i;
	char a[1000], xoa;
	printf("This program can delete a character as you choose in your string.\n");
	printf("Enter your string:\n");
	gets_s(a);
	printf("Ok, now enter a character that you\'d like to delete?\t");
	scanf_s("%c", &xoa);
	for (i = 0; i < strlen(a); i++)
	{
		if (xoa > 64 && xoa < 91)
		{
			if (a[i] == xoa || a[i] == xoa + 32)
			{
				for (int j = i; j <= strlen(a); j++)
				{
					a[j] = a[1 + j];
				}
				i--;
			}
		}
		else if (xoa > 96 && xoa < 123)
		{
			if (a[i] == xoa || a[i] == xoa - 32)
			{
				for (int j = i; j <= strlen(a); j++)
				{
					a[j] = a[1 + j];
				}
				i--;
			}
		}
		else
		{
			if (a[i] == xoa)
			{
				for (int j = i; j <= strlen(a); j++)
				{
					a[j] = a[1 + j];
				}
				i--;
			}
		}
	}
	printf("\nYour new string is:\n");
	printf("%s", a);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
