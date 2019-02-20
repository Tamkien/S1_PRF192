/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Wed, Feb 20th, 2019
*Other info: exercise 1.3
*Version: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	double r, C, S, pi = 3.14;
	printf("This application can help you calculate the perimeter and area of a circle.\n");
	do
	{
		printf("Enter the radius of your circle here, enter 0 to end.\n");
		scanf_s("%lf", &r);
		if (r == 0)
		{
			break;
		}
		else
		{
			C = r * 2 * 3.14;
			S = r * r * 3.14;
			printf("The perimeter of your circle is %.3lf\n", C);
			printf("The area of your circle is %.3lf\n", S);
		}
	} while (1);
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}



