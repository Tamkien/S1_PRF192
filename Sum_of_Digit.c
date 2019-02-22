/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Feb 22nd, 2019
*Other info: exercise 1.5
*Version: 1.1
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a, b, c, bc, abc, S;//S means Sum, abc is the number, bc is the last two digits, a, b and c are single digits.
	printf("This program can help you calculate the sum of 3 digits of a 3-digit number!\n");
	do
	{
		printf("Enter a positive 3-digit number here, enter 0 to exit.\n");
		scanf_s("%d", &abc);
		if (1000 > abc && abc > 99)//3-digit number
		{
			a = abc / 100;//chia 100 lay phan nguyen thi con chu so hang tram
			bc = abc - a * 100;//tru di chu so hang tram
			b = bc / 10;//lay hang chuc
			c = bc - b * 10;//lay hang don vi
			S = a + b + c;//tong ba chu so
			printf("The sum of the digits of %d is %d+%d+%d = %d.\n\n", abc, a, b, c, S);
		}
		else if (abc == 0)
		{
			break;
		}
		else {
			printf("Please enter a number that is between 100 to 999!\n\n");
		}
	} while (1);
	printf("\nWritten by Tamkien Cao. Thank you for using my application!\n");//credit line
	system("pause");
}
