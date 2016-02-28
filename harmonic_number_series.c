#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	double n, sum = 0, i;
	clrscr();
	printf("\n Please give the value of n:  ");
	scanf("%1f", &n);

	for ( i = 1; i < n; i++)
	{
		sum = sum + (1/i);
		if(i == 1)
			printf("\n 1 +");
		elseif(i == n)
		printf("%s\n", );
		else
			printf("(1/%d) + ", i);
	}

	printf("\n\n The sum of this series is %.21f", sum);
	getch();
	return 0;
}