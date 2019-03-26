
/*
*File name:
*Source file name:
*Author: Tamkien Cao
*Last modified: Tue, Mar 26th, 2019
*Other info: exercise 6.12
*Version 1.1
-Removed an unnecessary variable.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int kiemtra(char a[], char tucanxoa[], int i)//kiem tra xem co phai tu can xoa khong ne
{
	int check = 1;
	for (int j = 0; j < strlen(tucanxoa); j++)
	{
		if (a[i + j] != tucanxoa[j])
		{
			check = 0;
			break;
		}
	}
	return check;
}
char run(char a[], char tucanxoa[])//can cai nay vi mot tu co the xuat hien nhieu lan trong chuoi
{
	int vitri;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] == tucanxoa[0])
		{
			vitri = i;
			if (kiemtra(a, tucanxoa, i) == 0)
			{
				continue;//check den bao gio khong con nua moi thoi hjhj
			}
			else
			{
				for (i; i < vitri + strlen(tucanxoa); i++)//int k chi cho chay den so char can xoa thoi
				{
					for (int j = vitri; j < strlen(a); j++)//strlen keo ca gian sang ben trai
					{
						a[j] = a[1 + j];
					}
				}
				run(a, tucanxoa);//lap lai ne
			}
		}
	}
	return a[1000];
}
int main()
{
	int check = 1;
	char a[1000], tucanxoa[1000];
	printf("This program can delete a word in your string. If that word appears multiple times, all of them will be deleted.\n");
	printf("Enter a string here:\t");
	gets_s(a);
	printf("Enter the word that you\'d like to delete:\t");
	gets_s(tucanxoa);
	run(a, tucanxoa);
	printf("Your new string is:\t");
	printf("%s", a);
	printf("\n=================================\n");
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
