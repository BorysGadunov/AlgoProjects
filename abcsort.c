#include <stdio.h>
#include <string.h>

void main()
{
	char name[10][8], tname[10][8], temp[8];
	
	int i, j, n;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	printf("Enter %d names\n", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", name[i]);
		strcpy(tname[i], name[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (strcmp(name[i], name[j]) > 0)
			{
				strcpy(temp, name[i]);
				strcpy(name[i], name[j]);
				strcpy(name[j], temp);
			}
		}
	}
	printf("\n---------------------------------------------\n");
	printf("Input Names\tSorted names\n");
	printf("\n---------------------------------------------\n");
	for (int i = 0; i < n; i++)
	{
		printf("%s\t\t%s\n", tname[i], name[i] );
	}
	printf("-----------------------------------------------\n");
	getch();
}