/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 26th, 2019
*Other info: exercise 4.1
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n)
{
	int i, s = 1;
	for (i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
void Cal(double x, double n, double *s, double *s1, double *s2)
{
	for (int i = 0; i <= n; i++)
	{	
	*s += pow(x, i);
	*s1 += pow((-1), i)*pow(x, i);
	*s2 += pow(x, i) / factorial(i);
	}
	printf("%lf\t%lf\t%lf", *s, *s1, *s2);
}
int main()
{
	double s=0, s1=0, x, n, s2=0;
	printf("x = ");
	scanf_s("%lf", &x);
	printf("n = ");
	scanf_s("%lf", &n);
	Cal(x, n, &s, &s1, &s2);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
