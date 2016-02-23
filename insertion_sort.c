#include <stdio.h>
#define MAX 10

void insertion_sort(int * x);
int main()
{
	int a[MAX];
	clrscr();
	printf("Enter 10 elements to be sorted:\n");
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &a[i]);
	}
	insertion_sort(a);
	printf("sorted elements:\n");
	for (int i = 0; i < MAX; i++)
	{
		printf(" %d\n", a[i] );
	}
	getch();
	//sorts the input
	void insertion_sort(int * x)
	{
		int temp;
		for (int i = 0; i < MAX; i++)
		{
			temp = x[i];
			int j = j - 1;
			while(temp < x[j] && j >= 0)
			{
				x[j + 1] = x[j];
				j = j - 1;
			}
			x[j + 1] = temp;
		}
	}
	return 0;
}