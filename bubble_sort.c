#include <stdio.h>
#define MAXSIZE 10

void main{
	int array[MAXSIZE];
	int num, temp;

	printf("Enter the value of number \n");
	scanf("%d", &num);

	printf("Enter the elements one by one \n");
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}
	/*Bublle sort*/
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < (num - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	printf("Sorted array is...\n");
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", array[i]);
	}
	getch();
}