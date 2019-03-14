/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Mar 14th, 2019
*Other info:
-Exercise 6.2
- I used ASCII table in order to save my precious time.
*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void counting(char s[100])
{
	int lowc = 0, upc = 0, num = 0;

	for (int i = 0; i <= strlen(s); i++)
	{
		if ((s[i] > 64 && s[i] < 91))
		{
			upc++;
		}
		else if (s[i] > 96 && s[i] < 123)
		{
			lowc++;
		}
		else if (s[i] > 47 && s[i] < 58)
		{
			num++;
		}
	}
	printf("\"%s\" has %d figure(s), %d lowcase(s) and %d upcase(s).\n", s, num, lowc, upc);
}
int main() {
	char s[100];
	printf("This program can help you count figures, lowcases and upcases in your string.");
	printf("\nEnter a string here:\n");
	gets_s(s);
	counting(s);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
