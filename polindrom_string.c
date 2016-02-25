#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char a[1000], b[1000];
	//Get nuber from user
	printf("Enter the string to check if it is a polindrome\n");

	gets(a);

	strcpy(b, a);

	strrev();

	if (strcmp(a, b) == 0)
	{
		printf("\n Entered string is polindrome \n");
	}else{
		"Entered string is not polindrome \n"
	}
	getch();

	return 0;
}