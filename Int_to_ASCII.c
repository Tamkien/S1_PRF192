/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Wed, Feb 20th, 2019
*Other info: exercise 1.2b
*Version: 1.0
*/
#include <stdio.h>
#include <stdlib.h>
main()
{
	int n;
	printf("Give me a number and I'll tell you what the corresponding character in the ASCII table is.\n");
	do
	{
		printf("Enter a number here, enter 256 to exit:\n");
		scanf_s("%d", &n);
		if (-1 < n && n < 256)
		{
			printf("%d is the code of character \"%c\"!\n", n, n);
		}
		else if (n == 256)
		{
			break;
		}
		else
		{
			printf("There are only 255 characters in the ASCII table, so please enter a number between 1 and 255!\n");
		}
	} while (1);
	printf("===============================\nWritten by Tamkien Cao. Thank you for using my application!\n");//credit line
	system("pause");
}
