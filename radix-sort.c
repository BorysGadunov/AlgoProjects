#include <stdio.h>

int min = 0, count = 0, array[100] = {0}, array1[100] = {0};
int main()
{
	int temp, t, n;
	clrscr();
	printf("Enter size of array: \n");
	scanf("%d", &count);
	printf("Enter elements into array: \n");
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &array[i]);
		array1[i] = array[i];
	}
	for (int k = 0; k < 3; k++)
	{
		for (int i = 0; i < count; i++)
		{
			min = array[i] % 10;
			t = i;
			for (int j = 0; j < count; j++)
			{
				if (min > (array[j] % 10))
				{
					min = array[j] % 10;
					t = j;
				}
			}
			temp = array1[t];
			array1[t] = array1[i];
			array1[i] = temp;
			temp = array[t];
			array[t] = array[i];
			array[i] = temp;
		}
		for (int j = 0; j < count; j++) /*find MSB*/
			array[j] = array[j] / 10;
	}
	printf("Sorted Array (1Sdradix sort) : \n");
	for (int i = 0; i < count; i++)
	{
		printf("%d \n", array[i]);
	}
	getch();

	return 0;
}