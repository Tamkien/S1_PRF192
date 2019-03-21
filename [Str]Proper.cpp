/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Mar 21st, 2019
*Other info:
-Exercise 6.5
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fix(char c[])
{
	int n = strlen(c);
	for (int i = 0; i < n; i++)
	{
		if ((c[i] == 32) && (c[i + 1] == 32))
		{
			for (int j = i; j < n; j++)
			{
				c[j] = c[j + 1];
			}
			n--;//MUON TRU DI THI PHAI DUA RA NGOAI VONG FOR NHE
			i--;//sau cai for thi i tang len, nhung ta van phai xet i thay vi i++ nen phai i--
		}
		if (c[0] > 96 && c[0] < 123)
		{
			c[0] -= 32;
		}
		if (c[i] == 32 && c[i + 1] > 96 && c[i + 1] < 123)
		{
			c[i + 1] -= 32;
		}
	}
	if (c[0]==32)
	{
		for (int i = 0; i < n; i++)
		{
			c[i] = c[i + 1];
		}
		n--;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%c", c[i]);
	}
}

int main()
{
	char c[1000];
	printf("This program can upcase the first character of the words and delete unneccessary spaces.\nEnter 0 to exit.\n");
	while (1)
	{
		printf("Enter a paragraph here:\n");
		gets_s(c);
		if (c[0] == '0'&&c[1] == '\0')
		{
			break;
		}
		fix(c);
		printf("\n");
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
