#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Vao mot so tu 1 den 10\n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
		printf("One");
		break;
	case 2:
		printf("Two");
		break;
	case 3:
		printf("Three");
		break;
	case 4:
		printf("Four");
		break;
	case 5:
		printf("Five");
		break;
	case 6:
		printf("Six");
		break;
	case 7:
		printf("Seven");
		break;
	case 8:
		printf("Eight");
		break;
	case 9:
		printf("Nine");
		break;
	case 10:
		printf("Ten");
		break;
	default:
		printf("Hay nhap mot so tu 1 den 10.\n");
		break;
	}
	printf("\n");
	system("pause");
}
