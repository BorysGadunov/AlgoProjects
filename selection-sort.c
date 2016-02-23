#include <conio.h>
#include <stdio.h>
#define max 50

void selsort(int, int[]);
int main()
{
	int size, data[max];
	clrscr();

	printf("Enter no of Elements: \n");
	scanf("%d", &size);
	printf("\nEnter Elements: ");
	for (int i = 1; i < size; i++)
	{
		scanf("%d", &data[i]);
	}
	printf("\nUnsorted data: \n");
	for (int i = 1; i < size; i++)
	{
		printf("%d\t", data[i] );
	}
	selsort(size, data);
	getch();
	return 0;
}
void selsort(int n, int data[])
{
	int min, temp;
	printf("\nSorted List is: \n");
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = 0; j <= n; j++)
		{
			if (data[j] < data[min])
			{
				min = j;
			}
		}
		temp = data[i];
		data[i] = data[min];
		data[min] = temp;
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d\t", data[i] );
	}
}