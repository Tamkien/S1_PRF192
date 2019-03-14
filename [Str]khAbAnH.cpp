/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Mar 14th, 2019
*Other info:
- This program is designed exclusively for khA bAnH idoL.
*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void counting(char s[100])
{
	for (int i = 0; i <= strlen(s); i++)
	{
		if ((s[i] > 64 && s[i] < 91))
		{
			s[i]=s[i]+32;

		}
	}
	printf("Your results are:\n%s\n", s);
	for (int i = 0; i <= strlen(s); i++)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
		}
	}
	printf("%s", s);
}
int main() {
	char s[100];
	printf("This program is designed exclusively for khA bAnH idoL.");
	printf("\nEnter a string here:\n");
	gets_s(s);
	counting(s);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao for khA bAnH with love. n");
	system("pause");
}
