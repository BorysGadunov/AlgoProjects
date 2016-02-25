#include <stdio.h>

int main()
{
	int number_of_rows, a;
	printf("Enter the number_of_rows of Floyd's triangle to print\n");
	scanf("%d", &n );
	printf("Floyd's triangle\n");
	for (int i = 0; i < number_of_rows; i++)
	{
		for (int c = 0; c < i; c++)
		{
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}
	
	return 0;
}