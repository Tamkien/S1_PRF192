#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	float a,b,c,a2,b2,c2;
	printf("Phan mem nay se giup ban kiem tra xem tam giac cua ban la vuong, can, deu hay thuong.\n=================================\n");
	printf("Chi can nhap so do 3 canh vao day\n");
	printf("Hay nhap do dai canh thu nhat\n");
	scanf("%f",&a);
	printf("Hay nhap do dai canh thu hai\n");
	scanf("%f",&b);
	printf("Hay nhap do dai canh thu ba\n");//nhap cac gia tri cho 3 vars
	scanf("%f",&c);
/*
Nguyen tac: 
1. xet xem co phai la 3 canh tam giac hay ko
2. xet xem no co vuong hay ko
	a. Neu vuong thi xet xem co vuong can hay ko
	b. Neu ko vuong thi se xet xem can, deu hay thuong.
******Chu y cach nhap lieu, lam linh tinh sml co ngay :)
*/	
if (a+b>c&&b+c>a&&c+a>b)//dieu kien de la 3 canh cua tam giac
{	a2=a*a;
	b2=b*b;
	c2=c*c;
//---	
	if ((a2+b2)==(c2)||(a2+c2)==(b2)||(c2+b2)==(a2))//pitago
	{
		if ((a==c)||(a==b)||(b==c))//vua vuong vua can
		{
			printf("Tam giac cua ban la mot tam giac vuong can!");
		}
		else //vuong nhung khong can
		{
			printf("Tam giac cua ban la mot tam giac vuong!");
		}
	}
	else//neu ko vuong thi moi xet. viet kieu nay phai xet vuong truoc vi tam giac thuong thi ko the co he thuc pytago, con tam giac vuong thi lai co the can.
	{	
		if ((a==c&&a!=b)||(a==b&&b!=c)||(b==c&&c!=a))//2 canh bang nhau va khac canh con lai
		{
			printf("Tam giac cua ban la mot tam giac can!");
		}
		else if (a==b&&b==c&&c==a)//3 canh bang nhau
		{
			printf("Tam giac cua ban la mot tam giac deu!");
		}
		else//neu ko ton tai 2 canh bang nhau thi tuc la tam giac thuong
		{
			printf("Tam giac cua ban la mot tam giac thuong!");
		}
	}		
		
}
else//ko dat dieu kien dau tien
{
	printf("Ba so tren khong the la do dai cac canh cua mot tam giac!\n");
}
	printf("\n=================================\nWritten by Tamkien Cao. Thank you for using my application!\n");//credit line, neu xoa dong nay ctrinh se ko chay duoc;
	system("pause");
}
