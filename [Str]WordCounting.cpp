/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 19th, 2019
*Other info:
-Exercise 6.4
*/
#include <stdio.h>
#include<stdlib.h>
int word(char c[])
{
	int words = 0;
	if (c[0] != 32)//truong hop day ko bat dau bang dau cach
	{
		words++;
	}
	for (int i = 0; i < 1000; i++)
	{
		if (c[i] == 32 && c[i] != c[i + 1] && c[i + 1] != '\0')//Moi mot dau cach ma dang sau no ko phai dau cach thi tinh la mot tu.
		{
			words++;
		}
	}
	return words;
}
int main()
{
	char c[1000];

	printf("This program can count how many words there are in your paragraph.\nEnter 0 to exit.\n");
	while (1)
	{
		printf("\nEnter a paragraph here:\n");
		gets_s(c);
		if (c[0] == '0'&&c[1]=='\0')
		{
			break;
		}
		printf("Your paragraph has %d word(s).\n", word(c));
	}
  printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
