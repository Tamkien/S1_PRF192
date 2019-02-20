#include <stdio.h>
#include <stdlib.h>
main()
{
	char c;
	printf("This program can show you the ASCII code of your character.\n");
	printf("Enter your character here\n");
	scanf_s("%c", &c);
	printf("The ASCII code of \"%c\" is %d!\n", c, c);
	printf("Written by Tamkien Cao. Thank you for using my application!\n");
	system("pause");
}
