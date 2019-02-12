/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Feb 12th, 2019
*Version: 2.0
*Changelog(s): 
- Fix a critical bug that fucks the application if n==2.
*Other info:
-This is an exercise.
**/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n, i, k;
	printf("This program can print prime numbers that is not greater than your number.\n");
	printf("Enter an integer that is larger than 1 here:\n");
	scanf_s("%d", &n);
	if (n==2)
	{
		printf("The only prime number is 2.");
	}
	else if (n > 2)
	{

		printf("The prime numbers are 2, 3");//my calculating can't print 2 and 3 so this is my solution lol
		for (i = 2; i <= n; i++)
			//i will run from 2 to n
		{
			for (k = 2; k <= i / 2; k++)
				//k will run from 2 to i/2
			{
				if (i%k == 0)// which means i is not a prime number. 
				{
					break;//the "for" of the 31st line will stop, the one of the 28th line will continue to run
				}
				else if (k == i / 2)//which means i is a prime number
				{
					printf(", %d", i);// print i, then the 28th line will continue to run
				}
			}
		}
		printf(".");//a tiny cute dot at the end
	}

	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line. Please behave ethically by not deleting it.
	system("pause");
}
