/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Sat, Feb 9th, 2019
*Version: 1.0 Final
*Changelog: 
- Translate everything into English.
- Add some more reasonable comments.
*Other info:
-This ís the 17th exercise from the workshop.
**/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int i, n, F = 0, F1 = 1, F2;
	/*
	*i is the ordinal number in the sequence
	*n is the number of numbers :D in the sequence
	*F and F1 is the first and second number in the addition
	*F2 is always the number I need to print.
	*/
	printf("This application can create a Fibonacci sequence with a given length.\n");
	printf("A Fibonacci sequence is created by the following formula: Fn = F(n-1) + F(n-2)/nAnd started with 0 and 1.\n");
	printf("How many numbers do you want in the sequence?\n");
	scanf_s("%d", &n);
	if (n <= 2)
	{
		printf("A Fibonacci sequence has at least 3 numbers.!");
	}
	else
	{
		printf("Your Fibonacci sequence is 0, 1, ");
		for (i = 3; i <= n; i++)
			//starting with 3 as the first ones are 0 and 1.
		{
			F2 = F + F1;//The sequence is like F, F1, F2, F3, F4, etc.
			if (i < n)//My purpose is that the numbers are separated by a comma,
			{
				printf("%d, ", F2);
			}
			else if (i = n)// and the last one end with a dot.
			{
				printf("%d.", F2);
			}
			F = F1;//as we calculate F3, F3 is F2 and F1 is F in the 39th line
			F1 = F2;//and F2 is F1. 
		}
	}
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	//credit line. Please behave ethically by not fucking deleting it.
	system("pause");
}

