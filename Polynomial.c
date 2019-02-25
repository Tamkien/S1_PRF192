/*File name :
*Source file name :
*Author : Tamkien Cao
*Last modified : Mon, Feb 25th, 2019
* Other info :
-This is the 13th exercise from the workshop.
- I failed to translate this program. Sorry.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int a, i, A = 1, x, n, s = 0;//a,x,i,n nhu de ra, A la x^i, s la tong Fx.
	printf("Phan mem nay se giup ban tinh da thuc bac n.\n");
	printf("Nhap gia tri cua bien x:\n");
	scanf_s("%d", &x);
	printf("Nhap bac cua da thuc (n):\n");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
		/*
		bat dau tu i=0, tuc la a0, cho den a(n)

		*/
	{
		printf("Nhap he so bac %d\n", i);
		scanf_s("%d", &a);
		//ctrinh se ycau nhap lan luot he so tu 0 den n, tuong ung voi i
		A = pow(x, i);
		/*
		phai dung ham pow vi
		a, i bat dau tu 0, chu ko phai tu 1
		b, ngan gon, don gian la uu tien hang dau.
		*/
		s += a * A;//dung theo ycau de bai.
	}
	printf("F(%d) = %d", x, s);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
