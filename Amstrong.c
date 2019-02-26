/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue Feb 26th, 2019
*Other info: exercise 3.5
*Version: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a, b, c, bc, abc;//S means Sum, abc is the number, bc is the last two digits, a, b and c are single digits.
	for (abc = 100; abc < 1000; abc++)
	{
		a = abc / 100;//chia 100 lay phan nguyen thi con chu so hang tram
		bc = abc - a * 100;//tru di chu so hang tram
		b = bc / 10;//lay hang chuc
		c = bc - b * 10;//lay hang don vi
		if (abc == a*a*a + b*b*b + c*c*c)
		{
			printf("%d\n", abc);
		}
	}
printf("\nWritten by Tamkien Cao. Thank you for using my application!\n");//credit line
system("pause");
}
