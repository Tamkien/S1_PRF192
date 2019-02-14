#include<stdio.h>
#include<stdlib.h>
main()
{
	char name[20];
	int ngaycong, luongngay, luongthang, tamung;
	printf("Nhap ho ten:\n");
	scanf("%[^\n]s", &name);
	printf("Nhap so ngay cong:\n");
	scanf("%d", &ngaycong);
	printf("Nhap so tien luong mot ngay:\n");
	scanf("%d", &luongngay);
	printf("Nhap so tien tam ung cuoi thang:\n");
	scanf("%d", &tamung);
	luongthang = luongngay * ngaycong - tamung;
	printf("Ho va ten: %s\n", name);
	printf("So ngay cong: %d\n", ngaycong);
	printf("Luong mot ngay: %d\n", luongngay);
	printf("Tam ung tien cuoi thang:%d\n", tamung);
	printf("Luong thang: %d", luongthang);
	system("pause");
}
