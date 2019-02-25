/*File name :
*Source file name :
*Author : Tamkien Cao
*Last modified : Tue, Feb 26th, 2019
* Other info :
-This is the 13th exercise from the workshop.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double i, j, P = 0;//q=P/4
	for (i = 0; i < INT_MAX; i++)
	{
		j = (4 * pow(-1, i)) / (2 * i + 1);
		P += j;
		if (j <= 0.001&&j >= -0.001)
		{
			break;
		}
	}
	printf("%lf\n", P);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
