#include<stdio.h>
#include<stdlib.h>
int fac(int n)
{
	int i, s = 1;
	for (i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
main()
{
	int n, k, C;
	printf("This program can help you calculate a Combination ( C k/n).\n");
	do
	{
		printf("Enter k here, enter 0 to exit:\n");
		scanf_s("%d", &k);
		if (k == 0)
		{
			printf("C= 1\n");
			break;
		}
		else
		{
			printf("Enter n here:\n");
			scanf_s("%d", &n);
			if (k > n)
			{
				printf("Remember, k is never greater than n. Please try again.\n");
			}
			else
			{
				C = (fac(n)) / (fac(k)*fac(n - k));
				printf("C = %d\n", C);
			}
		}
	} while (1);
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
