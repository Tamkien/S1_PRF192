/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Wed, Jan 23rd, 2019
*Version: 1.0
*Changelog(s):
-Translated everything into English.
-Added some comments.
*Other info:
-This is the 15th exercise in the workshop.
**/
#include<stdio.h>
#include<stdlib.h>
main()
{
	int n, i = 2;
	printf("This program can check if your number is prime or not.\n");
	printf("Enter your number here:\n");
	scanf_s("%d", &n);
	if (n < 2)
	{
		printf("Please enter an integer that is larger than 1.");
		//Prime numbers are larger than 1.

	}
	else if (n == 2 || n == 3)//exceptions, see my idea below
	{
		printf("%d is a prime number.", n);
	}
	else
	{
		while (i <= n / 2)
		{
			if (n%i == 0)
			{
				printf("%d is NOT a prime number.", n);
				break;//if the first divisor in the range is found out, the number is not prime, my program stops.
			}
			else if (i == n / 2)
			{
				printf("%d is a prime number.", n);
			}//if no divisors detected, it's a fucking prime number.
			i++;
		}
	}
/*The idea is, prime numbers have no divisor except 1 and themselves.
  If n has any divisors, they must be smaller than n/2, exactly sqrt(n).
  However, as i'm using n/2, it's not true when n is 2 or 3. Therefore i had to add two exceptions in the 27th line.
*/


	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line. Please behave ethically by not fucking deleting it.
	system("pause");
}
