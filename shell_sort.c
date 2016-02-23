#include <stdio.h>
#define size 10

int shell_sort( int[] );

int main()
{
	int arr[size];
	clrscr();
	printf("Enter 10 elements to be sorted: \n");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", arr[i]);
	}
	shell_sort(arr);
	printf("The array after sorting is: \n");
	for (int i = 0; i < size; i++)
	{
		printf("\n%d", arr[i]);
	}
	getch();
	return 0;
}
int shell_sort(int array[])
{
	int i = 0, j = 0, k = 0, mid = 0;
	for (k = size / 2;k > 0; k /= 2)
	{
		for (j = k; j < size; j++)
		{
			for ( i = j - k; i >= 0; i -= k)
			{
				if (arr[i + k] >= array[i])
				{
					break;
				}
				else
				{
					mid = array[i];
					array[i] = array[i + k];
					array[i + k] = mid;
				}
			}
		}
	}
	return 0;
}