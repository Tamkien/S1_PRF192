/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Fri, Feb 22nd, 2019
*Other info: exercise 2.3
*Version: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	double a, b, c, D, x1, x2;
	printf("This program can help you solve a quadratic equation.\n");
	printf("Enter a\n");
	scanf_s("%lf", &a);
	printf("Enter b\n");
	scanf_s("%lf", &b);
	printf("Enter c\n");
	scanf_s("%lf", &c);
	D = b * b - 4 * a*c;//D is Delta
	if (D > 0)//Delta >0 thi ptrinh co 2 nghiem phan biet nhu sau
	{
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		printf("This equation has 2 distinct solutions, which are %lf and %lf!\n", x1, x2);
	}
	else if (D == 0)//Delta bang 0 thi co 1 nghiem duy nhat. chu y dau bang == va viet else if neu co nhieu dieu kien
	{
		x1 = (-b) / (2 * a);
		printf("The only solution is %lf!\n", x1);
	}
	else//tuc la delta nho hon 0, viet else cho dieu kien cuoi
	{
		printf("There are no solutions!\n");
	}
	printf("Written by Tamkien Cao. Thank you for using my software!\n");//credit line
	system("pause");
}
