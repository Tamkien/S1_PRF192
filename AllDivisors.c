/*
*Author: Tamkien Cao
*Last modified: Mon, Jan 28th, 2019
*Version: 1.0
*Reason of modification: translate everything into English.
*Other info:
-This is the 16th exercise from the workshop.
**/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int n, i;
	printf("This program can help you find out all the divisors of your number.\n");
	printf("Insert your number here\n");
	scanf_s("%d", &n);
	printf("All the divisors of %d is ",n);
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0 && i < n)
		{
			printf("%d, ", i);
		}
		else if (i == n)
		{
			printf("%d.", n);
		}
	}

	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line, dont fucking delete it.
	system("pause");
}

