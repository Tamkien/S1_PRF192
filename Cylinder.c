/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Thu, Feb 21st, 2019
*Other info: exercise 1.4
*Version: 1.0
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
	double R, h, SDAY, SXQ, STP, V, pi = 3.14;
	printf("This program can help you calculate the base , lateral and surface area and the volume of a cylinder.\n");
	printf("Enter the radius of the bottom here\n");
	scanf_s("%lf", &R);
	printf("Enter the height here\n");
	scanf_s("%lf", &h);
  
	SDAY = R * R*pi;
	SXQ = 2 * pi*R*h;
	V = SDAY * h;
	STP = SXQ + SDAY * 2;
  
	printf("The base area of the cylinder is %lf\n", SDAY);
	printf("The lateral area of the cylinder is %lf\n", SXQ);
	printf("The surface area of the cylinder is %lf\n", STP);
	printf("The volume of the cylinder is %lf\n", V);
	printf("Written by Tamkien Cao. Thank you for using my application!\n");//credit line
	system("pause");
}


