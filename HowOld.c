/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Wed, Feb 20th, 2019
*Other info: exercise 1.1
*Version: 2.0
*Changelog: Do it as the exercise expected
*/

#include<stdio.h>
#include<stdlib.h>
main()
{
	int yob, y;//yob: year of birth, y: year(s) old
	printf("This application can calculate how old you are.\n");
	do
	{
		printf("Enter your year of birth here, enter 3000 to quit:\n");
		scanf_s("%d", &yob);
		y = 2019 - yob;
		if (y < 0 && y != -981)// 2019-3000 = -981
		{
			printf("%d huh? You can't be born on this year dude :)\n", yob);
		}
		else if (y == 1)
		{
			printf("You were born in %d, so you are %d year old.\n", yob, y);
		}
		else if (y == -981)
		{
			break;
		}
		else//0 and more than 1
		{
			printf("You were born in %d, so you are %d years old.\n", yob, y);
		}
	} while (1);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");//credit line
	system("pause");
}

