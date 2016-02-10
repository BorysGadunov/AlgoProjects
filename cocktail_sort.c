#include <stdio.h>
#define MAX 8

int main()
{
	int data[MAX];
	int n, c;
	printf("\nEnter the data \n");
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &data[i]);
	}
	n = MAX;
	do{
//Rightward pass will shift the biggest element to its correct place at the end
		for (int i = 0; i < n - 1; i++)
		{
			if (data[i] > data[i + 1])
			{
				data[i] = data[i] + data[i + 1];
				data[i + 1] = data[i] - data[i + 1];
				data[i] = data[i] - data[i + 1];
			}
		}
		n = n - 1;
//Leftward pass will shift the smallest element to its correct place at the beggining		
		for (int i = MAX - 1, c = 0; i >= c; i--)
		{
			if (data[i] < data[i - 1])
			{
				data[i] = data[i] + data[i - 1];
				data[i - 1] = data[i] - data[i - 1];
				data[i] = data[i] - data[i - 1];
			}
		}
		c = c + 1;
	}while(n != 0 && c != 0);
	printf("The sorted elements are: ");
	for (int i = 0; i < MAX; i++)
	{
		printf("%d\t", data[i]);
	}
	return 0;
}