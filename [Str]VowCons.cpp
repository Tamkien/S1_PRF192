/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 12th, 2019
*Other info:
-Exercise 6.1
- I used ASCII table in order to save my precious time.
*/
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void counting(char s[100])
{
	int count = 0;
	int vow = 0, con = 0;
	for (int i = 0; i <= strlen(s); i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			count++;
			if (s[i] == 65 || s[i] == 69 || s[i] == 73 || s[i] == 79 || s[i] == 85 || s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117)
			{
				vow++;
			}
		}
	}
	con = count - vow;
	printf("\"%s\" has %d alphabets, including %d vowel(s) and %d consonant(s).\n", s, count, vow, con);
}
int main() {
	char s[100];
	printf("This program can help you count vowels and consonants in your string.");
	printf("\nEnter a string here:\t");
	gets_s(s);
	counting(s);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
