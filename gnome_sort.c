#include <stdio.h>

int main()
{
	int temp, ar[10], n
	printf("Enter the elements number that you would like to enter: \n");
	scanf("%d", &n);
	printf("Enter the elements to be sorted through gnome sort: \n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ar[i]);
	}
	int i = 0;
	while(i < n) {
		if (i == 0 || ar[i - 1] <= ar[i])
			i++;
		else
		{
			temp = ar[i - 1];
			ar[i - 1] = ar[i];
			ar[i] = temp;
			i = i - 1;
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", ar[i]);
	}
	return 0;
}