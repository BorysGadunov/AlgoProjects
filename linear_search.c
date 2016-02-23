#include <stdio.h>

int main(int argc, char const *argv[])
{
	int array[10];
	int num, keynum, found = 0;
	printf("Enter the value of num: \n");
	scanf("%d", &num);

	printf("Enter the elements one by one: \n");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &array[i] );
	}

	printf("Enter the element to be searched: \n");
	scanf("%d", &keynum);
	//linear search begins
	for (int i = 0; i < num; i++)
	{
		if (keynum == array[i])
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
	{
		printf("Element is present in the array\n");
		printf("Number Located at position: %d\n", i+1 );
	}
	else
		printf("Element isn't present in the array\n");
	getch();
	return 0;
}