/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Mar 14th, 2019
*Other info:
-Exercise 6.3
- I used ASCII table in order to save my precious time.
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
		else if (s[i] > 96 && s[i] < 123)
		{
			s[i]=s[i]-32;
		}
	}
	printf("Your result is:\n%s\n", s);
}
int main() {
	char s[100];
	printf("This program can help you reverse lowcase and upcase alphabets.");
	printf("\nEnter a string here:\n");
	gets_s(s);
	counting(s);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
