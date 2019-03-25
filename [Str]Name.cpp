/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 26th, 2019
*Other info: exercise 6.6
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fix(char c[])
{
	char ho[100], ten[100];
	int n = strlen(c), lastspace;
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
	if (c[0] == 32)
	{
		for (int i = 0; i < n; i++)
		{
			c[i] = c[i + 1];
		}
		n--;
	}
	for (int i = 0; i < n; i++)
	{
		if (c[i] == 32)
		{
			lastspace = i;
		}
	}
	for (int i = 0; i < lastspace; i++)
	{
		ho[i] = c[i];
	}
	for (int i = lastspace + 1; i < n; i++)
	{
		ten[i - lastspace - 1] = c[i];
	}
	printf("Your family + middle name is\t");
	for (int i = 0; i < lastspace; i++)
	{
		printf("%c", ho[i]);
	}
	printf("\nYour given name is\t");
	for (int i = 0; i < n - lastspace - 1; i++)
	{
		printf("%c", ten[i]);
	}
}
int main()
{
	char a[100];
	printf("Enter your full name here (Vietnamese names only)\t");
	gets_s(a);
	fix(a);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
