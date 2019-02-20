/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Wed, Feb 20th, 2019
*Other info: exercise 1.2a
*Version: 1.0
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	char c;
	printf("This program can show you the ASCII code of your character.\n");
	printf("Enter your character here\n");
	scanf_s("%c", &c);
	printf("The ASCII code of \"%c\" is %d!\n", c, c);
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
